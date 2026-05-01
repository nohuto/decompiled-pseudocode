/*
 * XREFs of ?PrepareForExitAnimation@CDropFeedback@@UEAAJPEAPEAUIDropFeedbackArray@@@Z @ 0x18036F660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedback::PrepareForExitAnimation(CDropFeedback *this, struct IDropFeedbackArray **a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned int v7; // esi
  __int64 v8; // rbx
  struct IDropFeedbackArray *v9; // rax
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = (__int64 *)((char *)this + 104);
  v5 = *((_QWORD *)this + 13);
  result = v5 == 0 ? 0x80004005 : 0;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v10);
    v7 = v10;
    while ( (--v7 & 0x80000000) == 0 )
    {
      v11 = 0LL;
      v8 = *v2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL))(
             v8,
             v7,
             &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
             &v11) >= 0
        && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11) == 1
         || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11) == 2
         || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11) == 3
         || ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 104LL))(v11) & 0x80000) != 0) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 48LL))(*v2, v7);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14), v11);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
    v9 = (struct IDropFeedbackArray *)*v2;
    *v2 = 0LL;
    *a2 = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
    return 0LL;
  }
  return result;
}
