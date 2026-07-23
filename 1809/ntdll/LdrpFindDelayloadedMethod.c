/*
 * XREFs of LdrpFindDelayloadedMethod @ 0x1800D0884
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800D0780 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpFindDelayloadedMethodInDescriptor @ 0x1800D0930 (LdrpFindDelayloadedMethodInDescriptor.c)
 */

__int64 __fastcall LdrpFindDelayloadedMethod(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 DelayloadedMethodInDescriptor; // rsi
  NTSTATUS v7; // eax
  __int64 v8; // r15
  unsigned int v9; // edi
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0LL;
  DelayloadedMethodInDescriptor = 0LL;
  v7 = RtlpImageDirectoryEntryToDataEx(a1, 1, 0xDu, &v12, &v13);
  v8 = v13;
  if ( v7 < 0 )
    v8 = 0LL;
  if ( v8 )
  {
    v9 = 0;
    v10 = v12 >> 5;
    if ( v12 >> 5 )
    {
      while ( 1 )
      {
        DelayloadedMethodInDescriptor = LdrpFindDelayloadedMethodInDescriptor(a1, v8 + 32LL * v9, a2);
        if ( DelayloadedMethodInDescriptor )
          break;
        if ( ++v9 >= v10 )
          return DelayloadedMethodInDescriptor;
      }
      *a3 = v8 + 32LL * v9;
    }
  }
  return DelayloadedMethodInDescriptor;
}
