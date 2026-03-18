/*
 * XREFs of ??0DXGSHAREDRESOURCE@@IEAA@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@@Z @ 0x1C012C380
 * Callers:
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C012C2E0 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 * Callees:
 *     <none>
 */

DXGSHAREDRESOURCE *__fastcall DXGSHAREDRESOURCE::DXGSHAREDRESOURCE(
        DXGSHAREDRESOURCE *this,
        struct ADAPTER_RENDER *a2,
        struct DXGADAPTER *a3)
{
  int CurrentProcessSessionId; // eax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 1;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this);
  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 16) = CurrentProcessSessionId;
  *((_QWORD *)this + 20) = (char *)this + 152;
  *((_QWORD *)this + 11) = a3;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 49) = 0;
  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a2 + 2) + 24LL));
    *((_QWORD *)this + 10) = -1LL;
  }
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  return this;
}
