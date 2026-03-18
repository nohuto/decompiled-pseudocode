/*
 * XREFs of ?WaitForNextMessage@CChannel@@UEAAJPEAUIMessageLoopExtensions@@KPEBQEAXKPEAK@Z @ 0x1800EA480
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@CChannel@@UEAAJXZ @ 0x180055780 (-Commit@CChannel@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::WaitForNextMessage(
        CChannel *this,
        struct IMessageLoopExtensions *a2,
        unsigned int a3,
        void *const *a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 v7; // rdi
  unsigned int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-268h]
  _QWORD v15[64]; // [rsp+40h] [rbp-248h] BYREF

  v7 = a3;
  if ( a3 && !a4 || a3 > 0x3F )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x266u, 0LL);
    return v10;
  }
  v11 = CChannel::Commit(this);
  v10 = v11;
  if ( v11 < 0 )
  {
    v14 = 617;
    goto LABEL_11;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  if ( *((CChannel **)this + 8) != (CChannel *)((char *)this + 64) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    *a6 = v7;
    return v10;
  }
  ResetEvent(*((HANDLE *)this + 10));
  memcpy_0(v15, a4, 8 * v7);
  v15[v7] = *((_QWORD *)this + 10);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v11 = (*(__int64 (__fastcall **)(struct IMessageLoopExtensions *, _QWORD, _QWORD *, _QWORD, _DWORD, unsigned int *))(*(_QWORD *)a2 + 32LL))(
          a2,
          (unsigned int)(v7 + 1),
          v15,
          a5,
          0,
          a6);
  v10 = v11;
  if ( v11 < 0 )
  {
    v14 = 645;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v14, 0LL);
  }
  return v10;
}
