/*
 * XREFs of ?CheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01EC010
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E68 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0032E34 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0034618 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall CheckPairedRenderAdapterForStopCallBack(struct DXGADAPTER ***a1, DXGADAPTER *a2)
{
  struct DXGADAPTER **v4; // rcx
  struct DXGADAPTER **v5; // rcx
  unsigned int v6; // edi
  unsigned __int8 IsPartOfDesktop; // al
  DXGADAPTER *v9[2]; // [rsp+20h] [rbp-38h] BYREF
  char v10[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v11; // [rsp+38h] [rbp-20h]
  char v12; // [rsp+40h] [rbp-18h]

  v11 = (struct DXGADAPTER *)a1;
  v12 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v4 = a1[319];
    v9[0] = 0LL;
    ADAPTER_DISPLAY::GetPairedRenderAdapter(v4, v9);
    if ( v9[0] == a2 )
    {
      v5 = a1[319];
      v6 = 0;
      if ( *((_DWORD *)v5 + 20) )
      {
        while ( 1 )
        {
          IsPartOfDesktop = ADAPTER_DISPLAY::IsPartOfDesktop(v5, v6);
          v5 = a1[319];
          if ( IsPartOfDesktop )
            break;
          if ( ++v6 >= *((_DWORD *)v5 + 20) )
            goto LABEL_8;
        }
        *((_BYTE *)v5 + 232) = 1;
        v5 = a1[319];
LABEL_8:
        if ( v6 < *((_DWORD *)v5 + 20) )
          ADAPTER_DISPLAY::SetPairedRenderAdapter(v5, 0LL);
      }
    }
    DXGADAPTER_REFERENCE::Assign(v9, 0LL);
  }
  if ( v12 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  return 0LL;
}
