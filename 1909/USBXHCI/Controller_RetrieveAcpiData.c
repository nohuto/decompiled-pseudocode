/*
 * XREFs of Controller_RetrieveAcpiData @ 0x1C0061A84
 * Callers:
 *     Controller_Create @ 0x1C005ECE8 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x1C0060AB4 (Controller_PopulateAcpiDeviceInformation.c)
 */

__int64 __fastcall Controller_RetrieveAcpiData(__int64 a1, __int64 a2, char *a3)
{
  __int64 v6; // r12
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned __int16 v9; // di
  size_t v10; // r14
  _WORD *PoolWithTag; // rax
  _WORD *v12; // rbx
  int v13; // eax
  __int64 v15; // [rsp+28h] [rbp-41h]
  __int64 v16; // [rsp+28h] [rbp-41h]
  __int64 v17; // [rsp+50h] [rbp-19h] BYREF
  _WORD *v18; // [rsp+58h] [rbp-11h]
  __int64 v19; // [rsp+60h] [rbp-9h]
  _WORD v20[16]; // [rsp+68h] [rbp-1h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  memset(v20, 0, sizeof(v20));
  v6 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 336))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v18 = v20;
  v17 = 1LL;
  v19 = 32LL;
  v7 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1488))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v6,
         0LL,
         3325992LL,
         0LL,
         &v17,
         0LL,
         0LL);
  v8 = v7;
  if ( v7 == -2147483643 )
  {
    v9 = v20[2];
    v10 = v20[2];
    PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v20[2], 0x49434858u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v10);
      v19 = v9;
      v17 = 1LL;
      v18 = v12;
      v13 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1488))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              v6,
              0LL,
              3325992LL,
              0LL,
              &v17,
              0LL,
              0LL);
      v8 = v13;
      if ( v13 >= 0 )
      {
        Controller_PopulateAcpiDeviceInformation(v12, a3);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = v13;
        WPP_RECORDER_SF_d(a2, 2u, 4u, 0x8Eu, (__int64)&Context.Logger + 4, v16);
      }
      if ( v12 != v20 )
        ExFreePoolWithTag(v12, 0x49434858u);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v15) = v9;
        WPP_RECORDER_SF_d(a2, 2u, 4u, 0x8Du, (__int64)&Context.Logger + 4, v15);
      }
      return (unsigned int)-1073741670;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = v7;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x8Cu, (__int64)&Context.Logger + 4, v15);
  }
  return v8;
}
