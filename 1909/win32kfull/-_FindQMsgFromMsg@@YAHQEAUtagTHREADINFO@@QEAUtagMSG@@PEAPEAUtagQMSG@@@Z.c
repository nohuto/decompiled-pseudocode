/*
 * XREFs of ?_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1C01E2F7C
 * Callers:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01E301C (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall _FindQMsgFromMsg(struct tagTHREADINFO *const a1, struct tagMSG *const a2, struct tagQMSG **a3)
{
  __int64 v3; // r9

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 24LL);
  if ( v3 )
  {
    while ( *(_DWORD *)(v3 + 16) != (unsigned __int64)(unsigned int)*(_QWORD *)a2
         || *(_DWORD *)(v3 + 24) != *((_DWORD *)a2 + 2)
         || *(_QWORD *)(v3 + 32) != *((_QWORD *)a2 + 2)
         || *(_QWORD *)(v3 + 64) != *((_QWORD *)a2 + 3)
         || *(_DWORD *)(v3 + 48) != *((_DWORD *)a2 + 8)
         || *(_DWORD *)(v3 + 52) != *((_DWORD *)a2 + 9)
         || *(_DWORD *)(v3 + 56) != *((_DWORD *)a2 + 10) )
    {
      if ( (*(_DWORD *)(v3 + 100) & 0x100) == 0 )
      {
        v3 = *(_QWORD *)v3;
        if ( v3 )
          continue;
      }
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v3 + 100) & 0x100) == 0 )
      v3 = *(_QWORD *)v3;
    *a3 = (struct tagQMSG *)v3;
    return 1LL;
  }
  else
  {
LABEL_11:
    UserSetLastError(87LL, (__int64)a2, (__int64)a3, v3);
    return 0LL;
  }
}
