/*
 * XREFs of xxxCallJournalRecordHook @ 0x1C01E8550
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0023720 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0023A2C (PhkFirstGlobalValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int16 __fastcall xxxCallJournalRecordHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // edx
  int v9; // eax
  struct tagHOOK *GlobalValid; // rax
  int v11; // ecx
  __int16 result; // ax
  int v13[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+60h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)&v13[1] = 0LL;
  LOBYTE(a2) = 1;
  v13[0] = v4;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 16);
  v13[3] = v6;
  if ( HMValidateHandleNoSecure(v7, a2, a3, a4) )
    v14 = *(_QWORD *)(a1 + 16);
  else
    v14 = 0LL;
  if ( (unsigned int)(v13[0] - 512) > 0xE )
  {
    if ( (unsigned int)(v13[0] - 256) <= 9 )
    {
      LOBYTE(v8) = *(_BYTE *)(a1 + 42);
      if ( *(_WORD *)(a1 + 32) != 231 || (_BYTE)v8 )
      {
        v8 = (unsigned __int8)v8;
        v13[1] = *(unsigned __int8 *)(a1 + 32) | ((unsigned __int8)v8 << 8);
      }
      else
      {
        v8 = 0;
        v13[1] = (*(unsigned __int16 *)(gptiCurrent + 874LL) << 16) | 0xE7;
      }
      v9 = *(_DWORD *)(a1 + 40);
      v13[2] = v8;
      if ( (v9 & 0x1000000) != 0 )
        v13[2] = v8 | 0x8000;
    }
  }
  else
  {
    *(_QWORD *)&v13[1] = *(_QWORD *)(a1 + 52);
  }
  GlobalValid = (struct tagHOOK *)PhkFirstGlobalValid(gptiCurrent, 0);
  xxxCallHook2(GlobalValid, 0, 0LL, v13, &v15, 0);
  v11 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v11 - 512) > 0xE )
  {
    result = v11 - 256;
    if ( (unsigned int)(v11 - 256) <= 9 )
    {
      *(_BYTE *)(a1 + 32) = v13[1];
      result = BYTE1(v13[1]);
      *(_BYTE *)(a1 + 42) = BYTE1(v13[1]);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 52) = v13[1];
    result = v13[2];
    *(_DWORD *)(a1 + 56) = v13[2];
  }
  return result;
}
