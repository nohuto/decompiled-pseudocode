/*
 * XREFs of xxxImmProcessKey @ 0x1C00B185C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     ClientImmProcessKey @ 0x1C00B1754 (ClientImmProcessKey.c)
 *     CheckImeHotKey @ 0x1C00B1A10 (CheckImeHotKey.c)
 *     GetAppImeCompatFlags @ 0x1C00B1B38 (GetAppImeCompatFlags.c)
 */

__int64 __fastcall xxxImmProcessKey(__int64 a1, __int64 *a2, int a3, unsigned __int16 a4, __int64 a5)
{
  int v8; // edi
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ebp
  __int64 v14; // r9
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // ebx
  __int64 v18; // rdx

  if ( ((a3 - 256) & 0xFFFFFFFA) != 0 )
    return 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(a2[2] + 432);
  if ( !v9 )
    return 0LL;
  v10 = (unsigned __int8)a4;
  v11 = CheckImeHotKey(a1, (unsigned __int8)a4, a5);
  v12 = 0xFFFFFFFFLL;
  if ( v11 )
  {
    v13 = *(_DWORD *)(v11 + 8);
    v14 = *(_QWORD *)(v11 + 24);
  }
  else
  {
    v13 = -1;
    v14 = 0LL;
  }
  if ( (unsigned int)(v13 - 256) <= 0x1F )
  {
    if ( *(_QWORD *)(v9 + 40) != v14 )
    {
      LOBYTE(v8) = (*(_DWORD *)(v9 + 64) & gSystemFS) != 0;
      PostMessage((int)a2, 80, v8, v14);
    }
    return (GetAppImeCompatFlags(a2[2], v12) & 0x800000) == 0;
  }
  if ( (*gpsi & 4) == 0 )
    return 0LL;
  if ( v13 == -1 )
  {
    if ( !*(_QWORD *)(v9 + 80)
      || !_HMObjectFromHandle(*(_QWORD *)(a2[5] + 208))
      || (a5 & 0x80000000) != 0 && (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 12LL) & 4) != 0 )
    {
      return 0LL;
    }
    if ( v10 - 241 > 0xA || (v15 = 1779, v16 = 1, !_bittest(&v15, v10 - 241)) )
      v16 = 0;
    if ( (unsigned int)(a3 - 260) <= 1 && v10 != 18 && v10 != 121 && !v16
      || (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 12LL) & 8) == 0 && !v16 && (v10 == 18 || (a5 & 0x20000000) != 0) )
    {
      return 0LL;
    }
  }
  if ( v10 == 231 )
    v10 = a4 | (*(unsigned __int16 *)(gptiCurrent + 874LL) << 16);
  v17 = ClientImmProcessKey(*a2, *(_QWORD *)(v9 + 40), v10, a5, v13);
  if ( (GetAppImeCompatFlags(a2[2], v18) & 0x800000) != 0 )
    v17 &= ~1u;
  return v17;
}
