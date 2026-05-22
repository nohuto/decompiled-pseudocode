/*
 * XREFs of ?SetTimeoutMicroseconds@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJ_J@Z @ 0x180123CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::SetTimeoutMicroseconds(
        Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *this,
        __int64 a2)
{
  LONGLONG v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  v4 = 1000000 * PerformanceCount.QuadPart / qword_180193A58;
  v5 = a2 - v4;
  if ( a2 <= v4 )
    v5 = 1LL;
  v6 = 10 * v5;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v7 = *((_QWORD *)this + 10);
  v8 = *((_QWORD *)this + 11);
  if ( v8 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, char *))(*(_QWORD *)v7 + 56LL))(
         v7,
         ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
         v6,
         (char *)this + 88);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BA,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
      (const char *)(unsigned int)v9);
  if ( this != (Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  return v10;
}
