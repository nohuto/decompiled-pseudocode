/*
 * XREFs of ?UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803F5670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18036F010 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18036F094 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803F5948 (-_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 *     ?_UpdateAutoGutters@CDropFeedback@@AEAAXXZ @ 0x1803F5B2C (-_UpdateAutoGutters@CDropFeedback@@AEAAXXZ.c)
 *     ?_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803F5E70 (-_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 */

__int64 __fastcall CDropFeedback::UpdateDropFeedback(
        CDropFeedback *this,
        struct IDropFeedbackArray *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  unsigned int v3; // ebx
  unsigned int i; // esi
  int v8; // eax
  __int64 v10[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+30h] BYREF
  struct IDropFeedbackItem *v12; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 15) )
  {
    v12 = (struct IDropFeedbackItem *)*((_QWORD *)this + 15);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(
      v10,
      (__int64 *)&v12,
      (__int64)&unk_1805270B8,
      (__int64)a3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    (*(void (__fastcall **)(struct IDropFeedbackArray *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v11);
    for ( i = 0; i < v11; ++i )
    {
      v12 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      if ( (*(int (__fastcall **)(struct IDropFeedbackArray *, _QWORD, GUID *, struct IDropFeedbackItem **))(*(_QWORD *)a2 + 32LL))(
             a2,
             i,
             &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
             &v12) >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v12 + 88LL))(v12);
        if ( v8 )
        {
          if ( v8 == 1 )
            CDropFeedback::_UpdateItem((CDropFeedback *)((char *)this - 24), v12, a3);
        }
        else
        {
          CDropFeedback::_RegisterItem((CDropFeedback *)((char *)this - 24), v12, a3);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    }
    CDropFeedback::_UpdateAutoGutters((CDropFeedback *)((char *)this - 24));
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v10);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v3;
}
