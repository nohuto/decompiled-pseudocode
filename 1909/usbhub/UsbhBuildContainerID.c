/*
 * XREFs of UsbhBuildContainerID @ 0x1C0023854
 * Callers:
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     RtlStringCbCatW @ 0x1C00267F8 (RtlStringCbCatW.c)
 *     RtlStringCopyWorkerW @ 0x1C0026874 (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x1C00268CC (RtlStringLengthWorkerW.c)
 *     memmove @ 0x1C002C6C0 (memmove.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

__int64 __fastcall UsbhBuildContainerID(__int64 a1, __int64 a2)
{
  wchar_t *v3; // rdi
  __int64 v5; // r9
  _DWORD *v6; // r14
  unsigned __int16 v7; // r12
  _QWORD *PoolWithTag; // rbx
  _WORD *v9; // rdx
  POOL_TYPE v10; // ecx
  unsigned __int16 v11; // r13
  _QWORD *v12; // r12
  _WORD *v13; // rdx
  SIZE_T v14; // r12
  unsigned __int16 v15; // r13
  wchar_t *v16; // rax
  const wchar_t *v17; // rbx
  wchar_t *v18; // rcx
  size_t v19; // r12
  wchar_t *v20; // rax
  size_t *v21; // r8
  NTSTATUS v22; // ecx
  unsigned __int64 v23; // rsi
  int v24; // r11d
  NTSTATUS Property; // ebx
  const wchar_t *v26; // r8
  int v27; // ecx
  NTSTATUS v28; // eax
  ULONG v29; // esi
  UCHAR *v30; // rax
  UCHAR *v31; // r15
  UCHAR *v32; // rax
  UCHAR *v33; // rsi
  int v35; // r8d
  ULONG *pcbResult; // [rsp+20h] [rbp-60h]
  unsigned int Size; // [rsp+40h] [rbp-40h]
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+58h] [rbp-28h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+60h] [rbp-20h] BYREF
  STRSAFE_PCNZWCH pszSrc; // [rsp+68h] [rbp-18h]
  void *Src; // [rsp+70h] [rbp-10h] BYREF
  ULONG pbOutput; // [rsp+D0h] [rbp+50h] BYREF
  ULONG v43; // [rsp+D8h] [rbp+58h] BYREF

  phHash = 0LL;
  pbOutput = 0;
  v43 = 0;
  v3 = 0LL;
  phAlgorithm = 0LL;
  Log(a1, 4096, 1111705924, a2, 0LL);
  v6 = PdoExt(v5);
  v7 = *((_WORD *)v6 + 704);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8uLL, 0x42554855u);
  if ( !PoolWithTag )
  {
    v35 = 1111699745;
    goto LABEL_72;
  }
  v9 = PoolWithTag;
  *PoolWithTag = 0LL;
  for ( *PoolWithTag = *(_QWORD *)L"nnnn"; *v9 != 110; ++v9 )
    ;
  *v9 = (unsigned __int8)Nibble[(unsigned __int64)v7 >> 12];
  v9[1] = (unsigned __int8)Nibble[((unsigned __int64)v7 >> 8) & 0xF];
  v9[2] = (unsigned __int8)Nibble[((unsigned __int64)v7 >> 4) & 0xF];
  v10 = ExDefaultNonPagedPoolType;
  v9[3] = (unsigned __int8)Nibble[v7 & 0xF];
  v11 = *((_WORD *)v6 + 705);
  Src = ExAllocatePoolWithTag(v10, 0x10uLL, 0x42554855u);
  v12 = Src;
  if ( Src )
  {
    Size = 8;
    *(_QWORD *)Src = 0LL;
    v13 = v12 + 1;
    v12[1] = 0LL;
    *v12 = *PoolWithTag;
    v12[1] = *(_QWORD *)L"nnnn";
    while ( *v13 != 110 )
      ++v13;
    *v13 = (unsigned __int8)Nibble[(unsigned __int64)v11 >> 12];
    v13[1] = (unsigned __int8)Nibble[((unsigned __int64)v11 >> 8) & 0xF];
    v13[2] = (unsigned __int8)Nibble[((unsigned __int64)v11 >> 4) & 0xF];
    v13[3] = (unsigned __int8)Nibble[v11 & 0xF];
  }
  else
  {
    Size = 0;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !v12 )
  {
    v35 = 1111700001;
LABEL_72:
    Property = -1073741670;
    Log(a1, 4096, v35, a2, -1073741670LL);
    return (unsigned int)Property;
  }
  v14 = (unsigned __int16)(Size * 2) + 10LL;
  v15 = *((_WORD *)v6 + 706);
  v16 = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v14, 0x42554855u);
  pszSrc = v16;
  v17 = v16;
  if ( v16 )
  {
    memset(v16, 0, v14);
    memmove((void *)pszSrc, Src, Size * 2);
    v18 = (wchar_t *)&pszSrc[Size];
    *(_QWORD *)v18 = *(_QWORD *)L"nnnn";
    while ( *v18 != 110 )
      ++v18;
    v17 = pszSrc;
    *v18 = (v15 >> 12) + 48;
    v18[1] = (HIBYTE(v15) & 0xF) + 48;
    v18[3] = (v15 & 0xF) + 48;
    v18[2] = ((unsigned __int8)v15 >> 4) + 48;
  }
  else
  {
    LODWORD(v14) = 0;
  }
  ExFreePoolWithTag(Src, 0);
  if ( !v17 )
  {
    v35 = 1111700257;
    goto LABEL_72;
  }
  v19 = (unsigned int)(v6[533] + v14);
  if ( v19 < 2 )
  {
    Property = -1073741670;
    Log(a1, 4096, 1111700769, a2, -1073741670LL);
    v33 = 0LL;
    v31 = 0LL;
    goto LABEL_44;
  }
  v20 = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)v19, 0x42554855u);
  v3 = v20;
  if ( !v20 )
  {
    Property = -1073741670;
    Log(a1, 4096, 1111700513, a2, -1073741670LL);
    goto LABEL_70;
  }
  memset(v20, 0, (unsigned int)v19);
  v22 = 0;
  v23 = (unsigned __int64)(unsigned int)v19 >> 1;
  v24 = -1073741811;
  if ( v23 - 1 > 0x7FFFFFFE )
    v22 = -1073741811;
  if ( v22 < 0 )
  {
    if ( v23 )
      *v3 = 0;
  }
  else
  {
    v22 = RtlStringCopyWorkerW(v3, (unsigned __int64)(unsigned int)v19 >> 1, v21, v17, (size_t)pcbResult);
  }
  Property = v22;
  if ( v22 < 0 )
    goto LABEL_70;
  v26 = (const wchar_t *)*((_QWORD *)v6 + 267);
  if ( v26 )
  {
    Property = RtlStringCbCatW(v3, v19, v26);
    if ( Property < 0 )
      goto LABEL_70;
    v24 = -1073741811;
  }
  v27 = 0;
  Src = 0LL;
  if ( v23 > 0x7FFFFFFF )
  {
    v28 = v24;
  }
  else
  {
    v28 = RtlStringLengthWorkerW(v3, (unsigned __int64)(unsigned int)v19 >> 1, (size_t *)&Src);
    v27 = (int)Src;
  }
  v29 = 2 * v27;
  if ( v28 < 0 )
    v29 = 0;
  Property = v28;
  if ( v28 < 0 )
    goto LABEL_70;
  Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 1u);
  if ( Property < 0 )
  {
    phAlgorithm = 0LL;
    goto LABEL_70;
  }
  Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, &v43, 0);
  if ( Property < 0 )
  {
LABEL_70:
    v33 = 0LL;
    v31 = 0LL;
    goto LABEL_44;
  }
  if ( v43 != 4 )
  {
    Property = -1073741306;
    goto LABEL_70;
  }
  v30 = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, pbOutput, 0x42554855u);
  v31 = v30;
  if ( v30 )
  {
    memset(v30, 0, pbOutput);
    Property = BCryptCreateHash(phAlgorithm, &phHash, v31, pbOutput, 0LL, 0, 0);
    if ( Property >= 0 )
    {
      Property = BCryptHashData(phHash, (PUCHAR)&pbInput, 0x10u, 0);
      if ( Property >= 0 )
      {
        Property = BCryptHashData(phHash, (PUCHAR)v3, v29, 0);
        if ( Property >= 0 )
        {
          Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&pbOutput, 4u, &v43, 0);
          if ( Property >= 0 )
          {
            if ( v43 == 4 && pbOutput >= 0x10 )
            {
              v32 = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, pbOutput, 0x42554855u);
              v33 = v32;
              if ( v32 )
              {
                memset(v32, 0, pbOutput);
                Property = BCryptFinishHash(phHash, v33, pbOutput, 0);
                if ( Property >= 0 )
                {
                  *(_OWORD *)(v6 + 679) = *(_OWORD *)v33;
                  *((_WORD *)v6 + 1361) = *((_WORD *)v6 + 1361) & 0xFFF | 0x5000;
                  *((_BYTE *)v6 + 2724) = v6[681] & 0x3F | 0x80;
                  *((_BYTE *)v6 + 2732) = 1;
                }
              }
              else
              {
                Property = -1073741670;
              }
              goto LABEL_44;
            }
            Property = -1073741811;
          }
        }
      }
    }
  }
  else
  {
    Property = -1073741670;
  }
  v33 = 0LL;
LABEL_44:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
