/*
 * XREFs of HmgIncProcessHandleCountEx @ 0x1C00BE1A0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C0019E60 (GreSetBrushOwner.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022950 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C0027540 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C002A580 (HmgSetOwner.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0022018 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall HmgIncProcessHandleCountEx(int a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  int v5; // edx
  int v6; // ecx
  struct _W32PROCESS *W32ProcessFromId; // rbx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  v4 = 1;
  if ( a1 && a1 != -2147483630 )
  {
    W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore(v6, v5, v8);
      if ( a3 || *((_DWORD *)W32ProcessFromId + 15) < gProcessHandleQuota )
      {
        v10 = *((unsigned int *)W32ProcessFromId + 16);
        v12 = ++*((_DWORD *)W32ProcessFromId + 15);
        if ( v12 > (unsigned int)v10 )
          v10 = v12;
        *((_DWORD *)W32ProcessFromId + 16) = v10;
      }
      else
      {
        v4 = 0;
      }
      GreReleaseHmgrSemaphore(v10, v9, v11);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return v4;
}
