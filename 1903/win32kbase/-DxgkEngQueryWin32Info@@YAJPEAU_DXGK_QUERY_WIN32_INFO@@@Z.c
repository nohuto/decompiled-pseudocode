/*
 * XREFs of ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C004D4A0
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0046570 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngQueryWin32Info(struct _DXGK_QUERY_WIN32_INFO *a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // rcx
  int v6; // ecx
  _DWORD *v7; // rax
  __int64 result; // rax
  _DWORD *v9; // rsi
  __int64 v10; // rax

  v4 = 0;
  v5 = *(unsigned int *)a1;
  if ( !(_DWORD)v5 )
  {
    v9 = (_DWORD *)*((_QWORD *)a1 + 1);
    if ( *((_DWORD *)a1 + 1) != 4 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v5, a2, a3);
      WdLogEvent5_WdAssertion(v10);
    }
    if ( gDrvDpiWin8Style )
      v4 = gdmLogPixels;
    *v9 = v4;
    return 0LL;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    if ( *((_DWORD *)a1 + 1) == 4 )
    {
      if ( gProtocolType )
      {
        v7 = (_DWORD *)*((_QWORD *)a1 + 1);
        if ( gProtocolType == -1 )
          *v7 = 0xFFFF;
        else
          *v7 = 2;
      }
      else
      {
        **((_DWORD **)a1 + 1) = 0;
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( v6 == 1 )
  {
    if ( *((_DWORD *)a1 + 1) == 1 )
    {
      **((_BYTE **)a1 + 1) = gbTtmEnabled;
      return 0LL;
    }
    return 3221225485LL;
  }
  result = IsDxgkEngQueryWin32InfoPlatformSupported();
  if ( (int)result >= 0 )
    return DxgkEngQueryWin32InfoPlatform(a1);
  return result;
}
