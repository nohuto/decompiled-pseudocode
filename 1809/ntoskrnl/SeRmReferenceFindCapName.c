/*
 * XREFs of SeRmReferenceFindCapName @ 0x140300BD0
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140326D3C (AdtpBuildContextFromSecurityDescriptor.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     SepRmReferenceFindCap @ 0x140300D50 (SepRmReferenceFindCap.c)
 *     SepValidateCAPIDs @ 0x140300E7C (SepValidateCAPIDs.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeRmReferenceFindCapName(PSID Sid1, _DWORD *a2, _QWORD *a3)
{
  int v3; // edi
  __int64 v5; // rsi
  unsigned int v6; // r14d
  _QWORD *PoolWithTag; // r15
  int v9; // ebp
  int Cap; // eax
  __int64 v11; // rdx
  unsigned __int16 **v12; // r8
  __int64 v13; // r9
  unsigned __int16 *v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  char *i; // r14
  __int64 v18; // rbx
  unsigned __int16 v19; // cx
  __int64 result; // rax
  PSID v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h]
  _QWORD *v23; // [rsp+70h] [rbp+18h]

  v23 = a3;
  v21 = Sid1;
  v3 = 0;
  v22 = 0LL;
  v5 = 0LL;
  v6 = 0;
  PoolWithTag = 0LL;
  v9 = SepValidateCAPIDs(Sid1, &v21);
  if ( v9 >= 0 )
  {
    Cap = SepRmReferenceFindCap(Sid1);
    v5 = v22;
    v9 = Cap;
    if ( Cap >= 0 )
    {
      v11 = *(unsigned int *)(v22 + 60);
      if ( (_DWORD)v11 )
      {
        v12 = (unsigned __int16 **)(v22 + 64);
        v13 = (unsigned int)v11;
        do
        {
          v14 = *v12++;
          v15 = *v14;
          if ( v15 <= 2 )
            v15 = 0;
          v6 += v15;
          --v13;
        }
        while ( v13 );
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6 + 16 * v11, 0x70536553u);
      if ( PoolWithTag )
      {
        v16 = 0;
        for ( i = (char *)&PoolWithTag[2 * *(unsigned int *)(v5 + 60)];
              v16 < *(_DWORD *)(v5 + 60);
              i += 2 * ((unsigned __int64)LOWORD(PoolWithTag[v18]) >> 1) )
        {
          v18 = 2LL * v16;
          PoolWithTag[2 * v16 + 1] = i;
          v19 = **(_WORD **)(v5 + 8LL * v16 + 64);
          if ( v19 <= 2u )
            v19 = 0;
          WORD1(PoolWithTag[2 * v16]) = v19;
          LOWORD(PoolWithTag[2 * v16]) = v19;
          memmove(i, *(const void **)(*(_QWORD *)(v5 + 8LL * v16++ + 64) + 8LL), v19);
        }
      }
      else
      {
        v9 = -1073741801;
      }
    }
  }
  *v23 = PoolWithTag;
  if ( v5 )
    v3 = *(_DWORD *)(v5 + 60);
  result = (unsigned int)v9;
  *a2 = v3;
  return result;
}
