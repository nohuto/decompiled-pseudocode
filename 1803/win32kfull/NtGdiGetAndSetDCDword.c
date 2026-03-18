/*
 * XREFs of NtGdiGetAndSetDCDword @ 0x1C00F3160
 * Callers:
 *     <none>
 * Callees:
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C008AD3C (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetAndSetDCDword(HDC a1, int a2, int a3, _DWORD *a4)
{
  int v7; // ebx
  unsigned int v8; // r14d
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  DC *v20; // [rsp+20h] [rbp-18h] BYREF
  int v21; // [rsp+28h] [rbp-10h]
  int v22; // [rsp+2Ch] [rbp-Ch]

  v7 = 0;
  v8 = 1;
  v21 = 0;
  v22 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v20, a1);
  if ( v20 )
  {
    v9 = a2 - 1;
    if ( !v9 )
    {
      v7 = *((_DWORD *)v20 + 9) & 0x400;
      *((_DWORD *)v20 + 9) &= ~0x400u;
      goto LABEL_14;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v7 = *((_DWORD *)v20 + 621);
      *((_DWORD *)v20 + 621) = a3;
      goto LABEL_14;
    }
    v11 = v10 - 2;
    if ( !v11 )
    {
      v19 = *((_QWORD *)v20 + 10);
      v7 = *(_DWORD *)(v19 + 164);
      *(_DWORD *)(v19 + 164) = a3;
      goto LABEL_14;
    }
    v12 = v11 - 2;
    if ( !v12 )
    {
LABEL_14:
      if ( v8 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (_DWORD *)MmUserProbeAddress;
        *a4 = v7;
      }
      XDCOBJ::vUnlockFast((XDCOBJ *)&v20);
      return v8;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        EngSetLastError(0x57u);
        v7 = -1;
      }
      else
      {
        v18 = *((_QWORD *)v20 + 10);
        v7 = *(_DWORD *)(v18 + 104);
        *(_DWORD *)(v18 + 104) = a3;
      }
      goto LABEL_14;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v7 = *(_DWORD *)(*((_QWORD *)v20 + 10) + 308LL);
      if ( v7 != a3 )
        v7 = DC::iSetMapMode(v20, a3);
      goto LABEL_14;
    }
    if ( v14 != 1 )
    {
      v8 = 0;
      goto LABEL_14;
    }
    v15 = *((_DWORD *)v20 + 64);
    if ( (*(_DWORD *)(*((_QWORD *)v20 + 10) + 312LL) & 1) != 0 )
    {
      v7 = 2 - ((v15 & 4) != 0);
      if ( a3 == 2 )
        goto LABEL_12;
      if ( a3 != 1 )
      {
LABEL_34:
        EngSetLastError(0x57u);
        v7 = 0;
        goto LABEL_14;
      }
    }
    else
    {
      v7 = ((v15 & 4) != 0) + 1;
      if ( a3 != 2 )
      {
        if ( a3 == 1 )
        {
LABEL_12:
          v16 = v15 & 0xFFFFFFFB;
LABEL_13:
          *((_DWORD *)v20 + 64) = v16;
          goto LABEL_14;
        }
        goto LABEL_34;
      }
    }
    v16 = v15 | 4;
    goto LABEL_13;
  }
  if ( a2 == 5 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_DWORD *)MmUserProbeAddress;
    *a4 = 0x80000000;
  }
  return 0LL;
}
