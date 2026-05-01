/*
 * XREFs of ?RemoveAt@CDropFeedbackList@@UEAAJI@Z @ 0x18036E750
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 */

__int64 __fastcall CDropFeedbackList::RemoveAt(CDropFeedbackList *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // rdx

  v2 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 3) )
    return 2147650721LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 2) + 8LL * a2));
  v5 = *((_QWORD *)this + 3);
  if ( v2 != v5 - 1 )
  {
    memmove_0(
      (void *)(*((_QWORD *)this + 2) + 8 * v2),
      (const void *)(*((_QWORD *)this + 2) + 8 * v2 + 8),
      8 * (v5 - v2) - 8);
    v5 = *((_QWORD *)this + 3);
  }
  *((_QWORD *)this + 3) = v5 - 1;
  return 0LL;
}
