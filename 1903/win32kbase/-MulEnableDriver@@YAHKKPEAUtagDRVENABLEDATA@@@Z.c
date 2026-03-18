/*
 * XREFs of ?MulEnableDriver@@YAHKKPEAUtagDRVENABLEDATA@@@Z @ 0x1C0127C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MulEnableDriver(__int64 a1, __int64 a2, struct tagDRVENABLEDATA *a3)
{
  unsigned int v4; // edx
  _OWORD *v5; // rax
  char *v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF
  _OWORD *v10; // [rsp+48h] [rbp+20h] BYREF

  if ( RtlRunOnceBeginInitialize(&gMulEnableDriverInit, 0, 0LL) == 259 )
  {
    if ( (int)IsMulGetAdditionalFunctionTableSupported() >= 0 )
    {
      MulGetAdditionalFunctionTable(&v10, &v9);
      v4 = v9;
      if ( v9 )
      {
        v5 = v10;
        v6 = (char *)(&unk_1C020F870 - (_UNKNOWN *)v10);
        v7 = v9;
        do
        {
          *(_OWORD *)((char *)v5 + (_QWORD)v6) = *v5;
          ++v5;
          --v7;
        }
        while ( v7 );
      }
      gcdrvfnMulti += v4;
    }
    RtlRunOnceComplete(&gMulEnableDriverInit, 0, 0LL);
  }
  a3->iDriverVersion = 196608;
  a3->pdrvfn = (DRVFN *)&gadrvfnMulti;
  result = 1LL;
  a3->c = gcdrvfnMulti;
  return result;
}
