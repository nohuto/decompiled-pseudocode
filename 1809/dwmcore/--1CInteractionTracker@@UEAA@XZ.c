/*
 * XREFs of ??1CInteractionTracker@@UEAA@XZ @ 0x18019DA98
 * Callers:
 *     ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x18019DD90 (--_ECInteractionTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ @ 0x18019F2D8 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18019F334 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801A2D98 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x1801E4B68 (--1InteractionSourceManager@@QEAA@XZ.c)
 */

void __fastcall CInteractionTracker::~CInteractionTracker(CInteractionTracker *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // r9
  void **v6; // rdi
  __int64 v7; // rsi

  *(_QWORD *)this = &CInteractionTracker::`vftable';
  CInteractionTracker::DestroyInteractionAnimations(this);
  CInteractionTracker::StopCustomAnimations(this);
  CInteractionTracker::DestroyDefaultAnimations(this);
  v2 = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
  v4 = *(_DWORD *)(v3 + 288);
  v5 = *(_QWORD *)(v3 + 264);
  if ( v4 )
  {
    do
    {
      if ( this == *(CInteractionTracker **)(v5 + 8 * v2) )
        break;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( (unsigned int)v2 < v4 )
  {
    while ( (unsigned int)v2 < v4 - 1 )
    {
      *(_QWORD *)(v5 + 8 * v2) = *(_QWORD *)(v5 + 8LL * (unsigned int)(v2 + 1));
      v2 = (unsigned int)(v2 + 1);
      v4 = *(_DWORD *)(v3 + 288);
    }
    *(_DWORD *)(v3 + 288) = v4 - 1;
  }
  v6 = (void **)((char *)this + 408);
  v7 = 4LL;
  do
  {
    operator delete(*v6);
    *v6++ = 0LL;
    --v7;
  }
  while ( v7 );
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 59);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 58);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 57);
  `vector destructor iterator'(
    (char *)this + 376,
    8LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CNaturalAnimation>::~ComPtr<CNaturalAnimation>);
  `vector destructor iterator'(
    (char *)this + 360,
    8LL,
    2LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CNaturalAnimation>::~ComPtr<CNaturalAnimation>);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 40);
  InteractionSourceManager::~InteractionSourceManager((CInteractionTracker *)((char *)this + 192));
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 8);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
