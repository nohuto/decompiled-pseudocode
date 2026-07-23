/*
 * XREFs of MiProtectSystemImage @ 0x14072C854
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 *     MiWriteProtectSystemImages @ 0x14072C7D0 (MiWriteProtectSystemImages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiComputeDriverProtection @ 0x14072CB30 (MiComputeDriverProtection.c)
 */

unsigned __int64 __fastcall MiProtectSystemImage(__int64 a1)
{
  char *v1; // rsi
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  PIMAGE_NT_HEADERS v4; // r13
  BOOL v5; // r15d
  __int64 NumberOfSections; // r14
  int v7; // r10d
  _BYTE *v8; // rdi
  __int64 v9; // rbp
  int *v10; // r8
  char *v11; // r9
  int v12; // ecx
  unsigned __int64 v13; // r9
  int v14; // r14d
  unsigned __int64 v15; // r12
  unsigned int v16; // edx
  unsigned __int64 v17; // rbp
  unsigned int v18; // r8d
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // rdx
  unsigned int v22; // ebx
  int v23; // edx
  unsigned int v24; // r8d
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // r10
  unsigned int v27; // r9d
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // r8
  __int64 SectionAlignment; // rcx
  unsigned __int64 v32; // rdx
  unsigned int v33; // eax
  unsigned __int64 v34; // r10
  __int64 v35; // rax
  unsigned int v36; // [rsp+20h] [rbp-98h]
  unsigned int v37; // [rsp+24h] [rbp-94h]
  unsigned int v38; // [rsp+28h] [rbp-90h]
  int v39; // [rsp+2Ch] [rbp-8Ch]
  unsigned __int64 v40; // [rsp+30h] [rbp-88h]
  __int64 PteAddress; // [rsp+38h] [rbp-80h]
  unsigned __int64 v42; // [rsp+40h] [rbp-78h]
  _BYTE *v43; // [rsp+48h] [rbp-70h]
  _BYTE v45[36]; // [rsp+58h] [rbp-60h] BYREF
  int v46; // [rsp+7Ch] [rbp-3Ch]

  v1 = *(char **)(a1 + 48);
  v2 = a1;
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( !(_DWORD)result )
  {
    v37 = 0;
    v4 = RtlImageNtHeader(v1);
    v5 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v1) == 1 )
      v37 = 1;
    else
      v5 = (*(_DWORD *)(v2 + 104) & 0x8000000) == 0;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v7 = v4->FileHeader.NumberOfSections;
    v8 = (char *)&v4->OptionalHeader + v4->FileHeader.SizeOfOptionalHeader;
    v9 = (v4->OptionalHeader.SizeOfImage >> 12) + ((v4->OptionalHeader.SizeOfImage & 0xFFF) != 0);
    result = (unsigned __int64)v1;
    if ( v4->FileHeader.NumberOfSections )
    {
      v10 = (int *)(v8 + 16);
      while ( 1 )
      {
        v11 = &v1[*(v10 - 1)];
        if ( (unsigned __int64)v11 < result )
          break;
        v12 = *v10;
        if ( *v10 < (unsigned int)*(v10 - 2) )
          v12 = *(v10 - 2);
        v10 += 10;
        result = -(__int64)v4->OptionalHeader.SectionAlignment & (unsigned __int64)&v11[v4->OptionalHeader.SectionAlignment
                                                                                      - 1
                                                                                      + v12];
        if ( !--v7 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v39 = -1073741824;
      v43 = &v8[40 * NumberOfSections - 1];
      PteAddress = MiGetPteAddress((unsigned __int64)v1);
      v40 = 0LL;
      v36 = 0;
      v14 = NumberOfSections + 1;
      v42 = PteAddress + 8 * v9;
      do
      {
        if ( v14 == 1 )
        {
          v46 = 0;
          v8 = v45;
          v15 = 0LL;
          v38 = 0;
          v17 = MiGetPteAddress(v13) + 8;
        }
        else
        {
          v15 = (unsigned __int64)&v1[*((unsigned int *)v8 + 3)];
          v17 = MiGetPteAddress(v15);
          if ( v18 < v16 )
            v18 = v16;
          v21 = v36;
          v38 = v18;
        }
        if ( v20 && v17 > v20 )
        {
          v33 = MiComputeDriverProtection(v37, v21);
          MiSetSystemCodeProtection(v2, v34, v34, v33);
          v19 = (unsigned __int64)v43;
          v35 = PteAddress + 8;
          if ( v40 != PteAddress )
            v35 = PteAddress;
          PteAddress = v35;
          v36 = 0;
          v40 = 0LL;
        }
        if ( v17 >= v42 )
        {
          result = (unsigned __int64)v45;
          if ( v8 != v45 )
            break;
        }
        v22 = *((_DWORD *)v8 + 9) & 0xE0000000;
        if ( v5 && ((MiFlags & 0x10000) == 0 || (*((_DWORD *)v8 + 9) & 0x20000000) == 0) )
          v22 = *((_DWORD *)v8 + 9) & 0x60000000 | 0x80000000;
        if ( v22 == v39 && (result = v4->OptionalHeader.SectionAlignment, (unsigned int)result <= 0x1000) )
        {
          SectionAlignment = (unsigned int)result;
          v32 = result + v38 - 1LL;
        }
        else
        {
          result = MiGetPteAddress(v19);
          v26 = result;
          if ( result == v17 )
          {
            v40 = v17;
            v26 = result - 8;
            v36 = v24 | v22 | v23;
          }
          if ( v26 >= v25 )
          {
            v27 = MiComputeDriverProtection(v37, v24);
            v30 = v42 - 8;
            if ( v28 < v42 )
              v30 = v28;
            result = MiSetSystemCodeProtection(a1, v29, v30, v27);
          }
          SectionAlignment = v4->OptionalHeader.SectionAlignment;
          v32 = SectionAlignment + v38 - 1LL;
          PteAddress = v17;
          v39 = v22;
        }
        v2 = a1;
        v8 += 40;
        v13 = (-SectionAlignment & (v15 + v32)) - 1;
        v43 = (_BYTE *)v13;
        --v14;
      }
      while ( v14 );
    }
  }
  return result;
}
