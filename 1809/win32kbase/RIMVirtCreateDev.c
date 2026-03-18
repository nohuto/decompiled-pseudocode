/*
 * XREFs of RIMVirtCreateDev @ 0x1C0122170
 * Callers:
 *     RIMVirtDeviceClassNotify @ 0x1C01248AC (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_S @ 0x1C005098C (WPP_RECORDER_SF_S.c)
 *     rimCreateDev @ 0x1C0050F60 (rimCreateDev.c)
 *     rimDereferenceDev @ 0x1C0089450 (rimDereferenceDev.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0091D3C (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C011BAA0 (RIMSetDeviceIdleTimeout.c)
 *     RIMVirtCreateHidDesc @ 0x1C011C038 (RIMVirtCreateHidDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0121FA0 (RIMFreeSpecificDevWorker.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtCreateDev(
        CDeviceIdentity **Object,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        struct _UNICODE_STRING **a6)
{
  char Length; // bp
  struct _UNICODE_STRING *Dev; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v16; // eax
  struct _KEVENT *v17; // rax
  __int64 HidDesc; // rax
  unsigned __int16 v19; // r9
  CDeviceIdentity *v20; // rcx
  CDeviceIdentity *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8

  Length = a2;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3);
  Dev = (struct _UNICODE_STRING *)rimCreateDev((int)Object, a2, a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v11 = Win32AllocPool(*(unsigned __int16 *)(a3 + 2), 0x70707352u);
    Dev[13].Buffer = (PWSTR)v11;
    if ( !v11 )
    {
      WPP_RECORDER_SF_S(
        gRimLog,
        2u,
        0x13u,
        0x16u,
        (__int64)&WPP_5e106e1955d43df0565e3144618cade0_Traceguids,
        *(const struct _MCGEN_TRACE_CONTEXT **)(a3 + 8));
LABEL_7:
      *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 9LL) = 1;
      RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev, v12);
      rimDereferenceDev((__int64)Dev, v13, v14);
      return 3221225495LL;
    }
    Dev[13].MaximumLength = *(_WORD *)(a3 + 2);
    RtlCopyUnicodeString(Dev + 13, (PCUNICODE_STRING)a3);
  }
  v16 = (__int64)Dev[11].Buffer & 0xFFFFFFDF;
  LOBYTE(Dev[3].Length) = Length;
  LODWORD(Dev[11].Buffer) = v16 | 0x40;
  if ( !a4 )
  {
    v17 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    *(_QWORD *)&Dev[22].Length = v17;
    if ( !v17 )
    {
      v19 = 24;
      goto LABEL_16;
    }
    KeInitializeEvent(v17, SynchronizationEvent, 0);
    Length = Dev[3].Length;
  }
  if ( Length == 2 )
  {
    HidDesc = RIMVirtCreateHidDesc((__int64)Object, (__int64)Dev, a5);
    *(_QWORD *)&Dev[29].Length = HidDesc;
    if ( !HidDesc )
    {
      v19 = 25;
LABEL_16:
      WPP_RECORDER_SF_(gRimLog, 2u, 0x13u, v19, (__int64)&WPP_5e106e1955d43df0565e3144618cade0_Traceguids);
      goto LABEL_7;
    }
  }
  LODWORD(Dev[12].Buffer) |= 0x20u;
  if ( (int)ObfReferenceObject(Object) < 0 )
    goto LABEL_7;
  *(_QWORD *)&Dev[21].Length = Object;
  v21 = Object[53];
  if ( v21 )
  {
    do
    {
      v20 = v21;
      v21 = (CDeviceIdentity *)*((_QWORD *)v21 + 5);
    }
    while ( v21 );
    *((_QWORD *)v20 + 5) = Dev;
  }
  else
  {
    Object[53] = (CDeviceIdentity *)Dev;
  }
  CDeviceIdentity::IssueIdentityOnDeviceArrival(v20, *(struct RawInputManagerDeviceObject **)&Dev[2].Length, v12);
  if ( !Object[80] || *((_DWORD *)Object + 216) || a4 == 0 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 1u);
  if ( (LODWORD(Dev[12].Buffer) & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout((struct RIMDEV *)Dev, v22, v23);
  *(_DWORD *)(&Dev[73].MaximumLength + 1) = -1;
  LODWORD(Dev[73].Buffer) = 0;
  if ( !Object[80] && !*((_DWORD *)Object + 216) )
  {
    if ( a4 )
      rimDoRimDevChange((__int64)Object, (__int64)Dev, 2u);
  }
  *a6 = Dev;
  return 0LL;
}
