/*
 * XREFs of ?GetAt@CDropFeedbackList@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1803D42F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedbackList::GetAt(
        CDropFeedbackList *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax
  __int64 (__fastcall ***v5)(_QWORD, const struct _GUID *, void **); // rcx

  result = 2147942487LL;
  if ( (unsigned __int64)a2 < *((_QWORD *)this + 3) )
  {
    v5 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2) + 8LL * a2);
    return (**v5)(v5, a3, a4);
  }
  return result;
}
