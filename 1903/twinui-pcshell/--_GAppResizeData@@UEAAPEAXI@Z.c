/*
 * XREFs of ??_GAppResizeData@@UEAAPEAXI@Z @ 0x1803CD3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x18009CA20 (--1OWNERSHIP_CHANGE_INFO@@QEAA@XZ.c)
 *     ??1?$CCoSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@@@QEAA@XZ @ 0x180108F84 (--1-$CCoSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHel.c)
 */

AppResizeData *__fastcall AppResizeData::`scalar deleting destructor'(AppResizeData *this, char a2)
{
  CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>::~CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>((__int64)this + 56);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  *((_DWORD *)this + 9) = -1073741823;
  OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
