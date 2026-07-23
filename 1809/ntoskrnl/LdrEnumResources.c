/*
 * XREFs of LdrEnumResources @ 0x140891E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1401B5F88 (LdrpCompareResourceNamesWithValidation.c)
 */

NTSTATUS __stdcall LdrEnumResources(
        PVOID BaseAddress,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        ULONG *ResourceCount,
        LDR_ENUM_RESOURCE_INFO *Resources)
{
  ULONG v5; // edi
  ULONG v7; // esi
  const wchar_t **v8; // r14
  unsigned __int16 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v13; // ecx
  unsigned int *v14; // r15
  int v15; // eax
  NTSTATUS v16; // ebp
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  ULONG_PTR v21; // rdi
  unsigned int *v22; // rbp
  int v23; // edx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  ULONG_PTR v27; // rsi
  unsigned int *v28; // r14
  unsigned int v29; // r13d
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rax
  LDR_ENUM_RESOURCE_INFO *v33; // r9
  char v34; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v35[3]; // [rsp+31h] [rbp-77h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-74h]
  unsigned int v37; // [rsp+38h] [rbp-70h]
  ULONG v38; // [rsp+3Ch] [rbp-6Ch]
  ULONG v39; // [rsp+40h] [rbp-68h]
  unsigned int v40; // [rsp+44h] [rbp-64h]
  int v41; // [rsp+48h] [rbp-60h]
  int v42; // [rsp+4Ch] [rbp-5Ch]
  unsigned int v43; // [rsp+50h] [rbp-58h]
  ULONG Size; // [rsp+C8h] [rbp+20h] BYREF

  v5 = 0;
  v7 = Level;
  v8 = (const wchar_t **)ResourceInfo;
  v38 = 0;
  if ( Resources )
    v39 = *ResourceCount;
  else
    v39 = 0;
  *ResourceCount = 0;
  v9 = (unsigned __int16 *)RtlImageDirectoryEntryToData(BaseAddress, 1u, 2u, &Size);
  v11 = (__int64)v9;
  if ( !v9 )
    return -1073741687;
  v13 = v9[7];
  v14 = (unsigned int *)(v9 + 8);
  v15 = v9[6];
  v16 = 0;
  v17 = v15 + v13 == 0;
  v18 = (unsigned int)(v15 + v13);
  v42 = 0;
  v37 = v18;
  v41 = 0;
  if ( v17 )
  {
LABEL_37:
    *ResourceCount = v5;
    return v16;
  }
  while ( v7 )
  {
    v19 = LdrpCompareResourceNamesWithValidation(v18, v10, *v8, v11, v14, &Size);
    v18 = v37;
    if ( !v19 )
      break;
LABEL_35:
    v14 += 2;
    if ( ++v41 >= (unsigned int)v18 )
    {
      v5 = v38;
      v16 = v42;
      goto LABEL_37;
    }
  }
  v20 = v14[1];
  if ( (int)v20 < 0 )
  {
    v21 = *v14;
    if ( (v21 & 0x80000000) == 0LL )
    {
      v21 = (unsigned __int16)v21;
    }
    else
    {
      LODWORD(v21) = v21 & 0x7FFFFFFF;
      v21 += v11;
    }
    LODWORD(v20) = v20 & 0x7FFFFFFF;
    v40 = 0;
    v22 = (unsigned int *)(v20 + v11 + 16);
    v23 = *(unsigned __int16 *)(v20 + v11 + 14);
    v24 = *(unsigned __int16 *)(v20 + v11 + 12);
    v17 = v24 + v23 == 0;
    v10 = (unsigned int)(v24 + v23);
    v36 = v10;
    if ( !v17 )
    {
      do
      {
        if ( v7 <= 1 || (v25 = LdrpCompareResourceNamesWithValidation(v18, v10, v8[1], v11, v22, &v34), v10 = v36, !v25) )
        {
          v26 = v22[1];
          if ( (int)v26 >= 0 )
            return -1073741701;
          v27 = *v22;
          if ( (v27 & 0x80000000) == 0LL )
          {
            v27 = (unsigned __int16)v27;
          }
          else
          {
            LODWORD(v27) = v27 & 0x7FFFFFFF;
            v27 += v11;
          }
          LODWORD(v26) = v26 & 0x7FFFFFFF;
          v28 = (unsigned int *)(v26 + v11 + 16);
          v29 = 0;
          v30 = *(unsigned __int16 *)(v26 + v11 + 14);
          v31 = *(unsigned __int16 *)(v26 + v11 + 12);
          v17 = v31 + v30 == 0;
          v18 = (unsigned int)(v31 + v30);
          v43 = v18;
          if ( !v17 )
          {
            do
            {
              if ( Level <= 2
                || !(unsigned int)LdrpCompareResourceNamesWithValidation(
                                    v18,
                                    v10,
                                    (const wchar_t *)ResourceInfo->Language,
                                    v11,
                                    v28,
                                    v35) )
              {
                v32 = v28[1];
                if ( (int)v32 < 0 )
                  return -1073741701;
                v18 = *v28;
                if ( (int)v18 >= 0 )
                {
                  v18 = (unsigned __int16)v18;
                }
                else
                {
                  LODWORD(v18) = v18 & 0x7FFFFFFF;
                  v18 += v11;
                }
                v10 = 5LL * v38++;
                if ( v38 > v39 )
                {
                  v42 = -1073741820;
                }
                else
                {
                  v33 = Resources;
                  *(&Resources->Type + v10) = v21;
                  *(&v33->Name + v10) = v27;
                  *(&v33->Language + v10) = v18;
                  *((_QWORD *)&v33->Data + v10) = (char *)BaseAddress + *(unsigned int *)(v32 + v11);
                  *(&v33->Size + v10) = *(unsigned int *)(v32 + v11 + 4);
                }
              }
              ++v29;
              v28 += 2;
            }
            while ( v29 < v43 );
            v10 = v36;
          }
          v8 = (const wchar_t **)ResourceInfo;
          v7 = Level;
        }
        v22 += 2;
        ++v40;
      }
      while ( v40 < (unsigned int)v10 );
      v18 = v37;
    }
    goto LABEL_35;
  }
  return -1073741701;
}
