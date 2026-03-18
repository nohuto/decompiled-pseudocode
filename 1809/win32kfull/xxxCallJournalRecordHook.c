/*
 * XREFs of xxxCallJournalRecordHook @ 0x1C01D394C
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B15F8 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     PhkFirstGlobalValid @ 0x1C00B189C (PhkFirstGlobalValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 */

__int16 __fastcall xxxCallJournalRecordHook(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned __int64 v4; // rcx
  __int16 v5; // ax
  int v6; // edx
  int v7; // eax
  struct tagHOOK *GlobalValid; // rax
  int v9; // ecx
  __int16 result; // ax
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  int v14; // [rsp+60h] [rbp+10h] BYREF

  v11 = 0LL;
  LOBYTE(a2) = 1;
  v12 = 0LL;
  v13 = 0LL;
  LODWORD(v11) = *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 16);
  HIDWORD(v12) = v3;
  if ( HMValidateHandleNoSecure(v4, a2) )
    v13 = *(_QWORD *)(a1 + 16);
  else
    v13 = 0LL;
  if ( (unsigned int)(v11 - 512) > 0xE )
  {
    if ( (unsigned int)(v11 - 256) <= 9 )
    {
      v5 = *(_WORD *)(a1 + 32);
      LOBYTE(v6) = *(_BYTE *)(a1 + 42);
      if ( v5 != 231 || (LOBYTE(v5) = -25, (_BYTE)v6) )
      {
        v6 = (unsigned __int8)v6;
        HIDWORD(v11) = (unsigned __int8)v5 | ((unsigned __int8)v6 << 8);
      }
      else
      {
        v6 = 0;
        HIDWORD(v11) = (*(unsigned __int16 *)(gptiCurrent + 874LL) << 16) | 0xE7;
      }
      v7 = *(_DWORD *)(a1 + 40);
      LODWORD(v12) = v6;
      if ( (v7 & 0x1000000) != 0 )
        LODWORD(v12) = v6 | 0x8000;
    }
  }
  else
  {
    HIDWORD(v11) = *(_DWORD *)(a1 + 52);
    LODWORD(v12) = *(_DWORD *)(a1 + 56);
  }
  GlobalValid = (struct tagHOOK *)PhkFirstGlobalValid(gptiCurrent, 0);
  xxxCallHook2(GlobalValid, 0, 0LL, (unsigned int *)&v11, &v14, 0);
  v9 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v9 - 512) > 0xE )
  {
    result = v9 - 256;
    if ( (unsigned int)(v9 - 256) <= 9 )
    {
      *(_BYTE *)(a1 + 32) = BYTE4(v11);
      result = HIBYTE(WORD2(v11));
      *(_BYTE *)(a1 + 42) = BYTE5(v11);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 52) = HIDWORD(v11);
    result = v12;
    *(_DWORD *)(a1 + 56) = v12;
  }
  return result;
}
