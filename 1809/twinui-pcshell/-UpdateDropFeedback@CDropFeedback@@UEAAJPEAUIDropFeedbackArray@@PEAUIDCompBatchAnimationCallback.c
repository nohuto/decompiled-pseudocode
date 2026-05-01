/*
 * XREFs of ?UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803701D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802EED50 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1802EEDD4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803704B0 (-_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 *     ?_UpdateAutoGutters@CDropFeedback@@AEAAXXZ @ 0x180370694 (-_UpdateAutoGutters@CDropFeedback@@AEAAXXZ.c)
 *     ?_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803709D8 (-_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 */

__int64 __fastcall CDropFeedback::UpdateDropFeedback(
        CDropFeedback *this,
        struct IDropFeedbackArray *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  struct IDropFeedbackItem *v5; // rcx
  unsigned int v7; // ebx
  unsigned int i; // esi
  int v9; // eax
  __int64 v11[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+30h] BYREF
  struct IDropFeedbackItem *v13; // [rsp+88h] [rbp+48h] BYREF

  v5 = (struct IDropFeedbackItem *)*((_QWORD *)this + 15);
  v7 = v5 == 0LL ? 0x80004005 : 0;
  if ( v5 )
  {
    v13 = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(
      v11,
      (__int64 *)&v13,
      (__int64)&unk_180484348,
      (__int64)a3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    (*(void (__fastcall **)(struct IDropFeedbackArray *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v12);
    for ( i = 0; i < v12; ++i )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      if ( (*(int (__fastcall **)(struct IDropFeedbackArray *, _QWORD, GUID *, struct IDropFeedbackItem **))(*(_QWORD *)a2 + 32LL))(
             a2,
             i,
             &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
             &v13) >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v13 + 88LL))(v13);
        if ( v9 )
        {
          if ( v9 == 1 )
            CDropFeedback::_UpdateItem((CDropFeedback *)((char *)this - 24), v13, a3);
        }
        else
        {
          CDropFeedback::_RegisterItem((CDropFeedback *)((char *)this - 24), v13, a3);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    }
    CDropFeedback::_UpdateAutoGutters((CDropFeedback *)((char *)this - 24));
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v11);
  }
  return v7;
}
