/*
 * XREFs of ExfWaitForRundownProtectionRelease @ 0x14010C4C0
 * Callers:
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 */

int __fastcall ExfWaitForRundownProtectionRelease(volatile signed __int64 *a1, unsigned __int64 a2)
{
  char *v2; // r8
  unsigned __int64 v3; // r9
  bool v4; // zf
  signed __int32 *v5; // rax
  bool v6; // di
  int v7; // ebx
  unsigned __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int16 Object; // [rsp+38h] [rbp-30h] BYREF
  char v12; // [rsp+3Ah] [rbp-2Eh]
  int v13; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  signed __int32 v15[4]; // [rsp+50h] [rbp-18h] BYREF
  int v16; // [rsp+70h] [rbp+8h] BYREF

  v15[0] = 1;
  v2 = (char *)&v10 + 1;
  do
  {
    v3 = a2 >> 1;
    v10 = a2 >> 1;
    v5 = (signed __int32 *)_InterlockedCompareExchange64(a1, (signed __int64)&v10 + 1, a2);
    v4 = a2 == (_QWORD)v5;
    a2 = (unsigned __int64)v5;
  }
  while ( !v4 );
  if ( v3 )
  {
    v16 = 0;
    v6 = KeGetCurrentIrql() < 2u;
    v7 = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
      v7 = ExpSpinCount;
    while ( 1 )
    {
      LODWORD(v5) = v15[0];
      if ( (v15[0] & 1) == 0 )
        break;
      if ( v6 )
      {
        if ( !v7 )
        {
          Object = 1;
          v14[1] = v14;
          v14[0] = v14;
          v5 = v15;
          v12 = 6;
          v13 = 0;
          if ( _interlockedbittestandreset(v15, 0) )
            LODWORD(v5) = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          return (int)v5;
        }
        --v7;
        _mm_pause();
      }
      else
      {
        KeYieldProcessorEx(&v16, a2, (__int64)v2);
      }
    }
  }
  return (int)v5;
}
