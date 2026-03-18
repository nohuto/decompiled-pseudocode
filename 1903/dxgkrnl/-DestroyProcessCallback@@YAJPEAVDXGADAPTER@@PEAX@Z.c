/*
 * XREFs of ?DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C025D670
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C020EFF8 (-NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DestroyProcessCallback(struct DXGADAPTER *const **a1, struct DXGPROCESS *a2)
{
  struct DXGADAPTER *const *v4; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+30h] [rbp-18h]

  v7 = (struct DXGADAPTER *)a1;
  v8 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v4 = a1[320];
    if ( v4 )
      ADAPTER_RENDER::NotifyDxgProcessDestroyed(v4, a2);
  }
  if ( v8 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  return 0LL;
}
