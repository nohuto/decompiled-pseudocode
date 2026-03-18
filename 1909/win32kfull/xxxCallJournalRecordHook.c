/*
 * XREFs of xxxCallJournalRecordHook @ 0x1C01E83D0
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0029B90 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0029E9C (PhkFirstGlobalValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int16 __fastcall xxxCallJournalRecordHook(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  int v5; // eax
  unsigned __int64 v6; // rcx
  int v7; // edx
  int v8; // eax
  struct tagHOOK *GlobalValid; // rax
  int v10; // ecx
  __int16 result; // ax
  int v12[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  int v14; // [rsp+60h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)&v12[1] = 0LL;
  LOBYTE(a2) = 1;
  v12[0] = v3;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 16);
  v12[3] = v5;
  if ( HMValidateHandleNoSecure(v6, a2, a3) )
    v13 = *(_QWORD *)(a1 + 16);
  else
    v13 = 0LL;
  if ( (unsigned int)(v12[0] - 512) > 0xE )
  {
    if ( (unsigned int)(v12[0] - 256) <= 9 )
    {
      LOBYTE(v7) = *(_BYTE *)(a1 + 42);
      if ( *(_WORD *)(a1 + 32) != 231 || (_BYTE)v7 )
      {
        v7 = (unsigned __int8)v7;
        v12[1] = *(unsigned __int8 *)(a1 + 32) | ((unsigned __int8)v7 << 8);
      }
      else
      {
        v7 = 0;
        v12[1] = (*(unsigned __int16 *)(gptiCurrent + 874LL) << 16) | 0xE7;
      }
      v8 = *(_DWORD *)(a1 + 40);
      v12[2] = v7;
      if ( (v8 & 0x1000000) != 0 )
        v12[2] = v7 | 0x8000;
    }
  }
  else
  {
    *(_QWORD *)&v12[1] = *(_QWORD *)(a1 + 52);
  }
  GlobalValid = (struct tagHOOK *)PhkFirstGlobalValid(gptiCurrent, 0);
  xxxCallHook2(GlobalValid, 0, 0LL, v12, &v14, 0);
  v10 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v10 - 512) > 0xE )
  {
    result = v10 - 256;
    if ( (unsigned int)(v10 - 256) <= 9 )
    {
      *(_BYTE *)(a1 + 32) = v12[1];
      result = BYTE1(v12[1]);
      *(_BYTE *)(a1 + 42) = BYTE1(v12[1]);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 52) = v12[1];
    result = v12[2];
    *(_DWORD *)(a1 + 56) = v12[2];
  }
  return result;
}
