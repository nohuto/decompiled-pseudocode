/*
 * XREFs of ??1CInteractionTracker@@UEAA@XZ @ 0x1801D6F1C
 * Callers:
 *     ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x1801D7270 (--_ECInteractionTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18007AE34 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED1C4 (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D88D8 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x18021CE7C (--1InteractionSourceManager@@QEAA@XZ.c)
 */

void __fastcall CInteractionTracker::~CInteractionTracker(CInteractionTracker *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rcx
  void **v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx

  *(_QWORD *)this = &CInteractionTracker::`vftable';
  CInteractionTracker::DestroyInteractionAnimations(this);
  CInteractionTracker::StopCustomAndDefaultAnimations(this, 0);
  v2 = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
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
    for ( ; (unsigned int)v2 < v4 - 1; v4 = *(_DWORD *)(v3 + 288) )
    {
      v6 = (unsigned int)v2;
      LODWORD(v2) = v2 + 1;
      *(_QWORD *)(v5 + 8 * v6) = *(_QWORD *)(v5 + 8LL * (unsigned int)v2);
    }
    *(_DWORD *)(v3 + 288) = v4 - 1;
  }
  v7 = (void **)((char *)this + 408);
  v8 = 4LL;
  do
  {
    operator delete(*v7);
    *v7++ = 0LL;
    --v8;
  }
  while ( v8 );
  v9 = *((_QWORD *)this + 79);
  if ( v9 )
  {
    *((_QWORD *)this + 79) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 472);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 58);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 57);
  `vector destructor iterator'(
    (char *)this + 376,
    8LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  `vector destructor iterator'(
    (char *)this + 360,
    8LL,
    2LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 40);
  InteractionSourceManager::~InteractionSourceManager((CInteractionTracker *)((char *)this + 192));
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 8);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
