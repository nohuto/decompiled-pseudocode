/*
 * XREFs of ?ReadBlockListInfo@DXGADAPTER@@QEAAJPEAU_D3DKMT_BLOCKLIST_INFO@@IE@Z @ 0x1C0141420
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall DXGADAPTER::ReadBlockListInfo(
        DXGADAPTER *this,
        struct _D3DKMT_BLOCKLIST_INFO *a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // rsi
  __int64 Size; // rdx
  unsigned int v7; // eax
  __int64 v8; // r8
  UINT v9; // ebx
  const void *v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = (unsigned int)a3;
  if ( !a4 )
  {
    if ( !*((_BYTE *)this + 4148) )
      goto LABEL_3;
LABEL_12:
    v12 = WdLogNewEntry5_WdWarning(this, a2, a3);
    v13 = -1073741637;
    *(_QWORD *)(v12 + 24) = -1073741637LL;
    WdLogEvent5_WdWarning(v12);
    goto LABEL_16;
  }
  if ( *((_BYTE *)this + 4132) )
    goto LABEL_12;
LABEL_3:
  Size = a2->Size;
  v7 = -1;
  v8 = (unsigned int)(Size + 4);
  if ( (unsigned int)v8 >= (unsigned int)Size )
    v7 = Size + 4;
  if ( (unsigned int)v4 < v7 || (unsigned int)v8 < (unsigned int)Size )
  {
    v15 = WdLogNewEntry5_WdWarning(this, Size, v8);
    *(_QWORD *)(v15 + 24) = v4;
    *(_QWORD *)(v15 + 32) = -1073741789LL;
    WdLogEvent5_WdWarning(v15);
    result = 3221225507LL;
    goto LABEL_20;
  }
  if ( a4 )
  {
    v9 = *((_DWORD *)this + 1032);
    v10 = (const void *)*((_QWORD *)this + 515);
  }
  else
  {
    v9 = *((_DWORD *)this + 1036);
    v10 = (const void *)*((_QWORD *)this + 517);
  }
  if ( !(_DWORD)Size )
    goto LABEL_10;
  if ( v9 <= (unsigned int)Size )
  {
    if ( v9 )
      memmove(a2->BlockList, v10, v9);
LABEL_10:
    a2->Size = v9;
    return 0LL;
  }
  v14 = WdLogNewEntry5_WdWarning(this, Size, v8);
  *(_QWORD *)(v14 + 24) = v4;
  *(_QWORD *)(v14 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v14);
  v13 = -1073741789;
LABEL_16:
  result = v13;
LABEL_20:
  a2->Size = 0;
  return result;
}
