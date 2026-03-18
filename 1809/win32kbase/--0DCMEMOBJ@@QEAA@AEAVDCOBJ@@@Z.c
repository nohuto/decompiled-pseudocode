/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C00F6470
 * Callers:
 *     <none>
 * Callees:
 *     HmgAlloc @ 0x1C0001010 (HmgAlloc.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00668FC (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00713AC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, DC **a2)
{
  struct HOBJ__ *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _W32THREAD *ThreadWin32Thread; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v4 = HmgAlloc(0x868uLL, 1u, 1u);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    if ( *((_WORD *)v4 + 6) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(*(_QWORD *)this + 2136LL) = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
    *(_DWORD *)(*(_QWORD *)this + 2144LL) = 0xFFFF;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    v9 = *(_QWORD *)this;
    v10 = (_QWORD *)(*(_QWORD *)this + 1112LL);
    if ( *(_QWORD *)this != -1112LL )
    {
      *(_QWORD *)(*(_QWORD *)this + 1120LL) = 0LL;
      v10[2] = 0LL;
      *v10 = &CPushLock::`vftable';
      v9 = *(_QWORD *)this;
    }
    *(_QWORD *)(v9 + 1144) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)*a2 + 6);
    *(_QWORD *)(*(_QWORD *)this + 976LL) = *(_QWORD *)this + 544LL;
    DC::vCopyTo(*a2, (DC **)this);
  }
  return this;
}
