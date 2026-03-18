/*
 * XREFs of HmgDecProcessHandleCount @ 0x1C0021FCC
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C0019E60 (GreSetBrushOwner.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0021C70 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022950 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C0027540 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C002A580 (HmgSetOwner.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0022018 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 */

void __fastcall HmgDecProcessHandleCount(unsigned int a1)
{
  int v1; // edx
  int v2; // ecx
  struct _W32PROCESS *W32ProcessFromId; // rbx
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 && a1 != -2147483630 )
  {
    W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore(v2, v1, v4);
      --*((_DWORD *)W32ProcessFromId + 15);
      GreReleaseHmgrSemaphore(v6, v5, v7);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
}
