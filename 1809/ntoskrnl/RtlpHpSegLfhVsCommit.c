/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x14000BF30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x14000C244 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegPageRangeHandleCommit @ 0x14000C760 (RtlpHpSegPageRangeHandleCommit.c)
 *     RtlpHpSegDescriptorValidate @ 0x1400BEC10 (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, int a2)
{
  __int64 v4; // r13
  __int64 v5; // r9
  unsigned int v6; // r10d
  unsigned int v7; // r10d
  __int64 v8; // rdi
  int v9; // r12d
  unsigned int v10; // ebx
  int v11; // edi
  unsigned int v12; // r14d
  unsigned __int64 v13; // r15
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  char v16; // cl
  int v17; // r8d
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r9
  int v20; // ebp
  unsigned __int64 v21; // r10
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rcx
  int v26; // eax
  unsigned int v27; // edx
  int v28; // ecx
  unsigned int v29; // r11d
  __int64 result; // rax
  unsigned int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // r10d
  unsigned int v35; // r12d
  int v36; // r12d
  unsigned int v37; // ecx
  unsigned int v38; // eax
  int v39; // ebp
  unsigned int v40; // r8d
  int v41; // ecx
  unsigned int v42; // edx
  int v43; // eax
  unsigned int v44; // [rsp+40h] [rbp-58h]
  unsigned int v45; // [rsp+44h] [rbp-54h]
  unsigned int v46; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v47; // [rsp+A8h] [rbp+10h]
  int v48; // [rsp+B0h] [rbp+18h] BYREF
  int v49; // [rsp+B8h] [rbp+20h]

  v4 = RtlpHpSegDescriptorValidate();
  v5 = v4 & *(_QWORD *)a1;
  v7 = v6 >> 12;
  v8 = (v4 - v5) >> 5;
  v9 = 511;
  v10 = (a2 - (unsigned int)(v8 << *(_BYTE *)(a1 + 8)) - (unsigned int)v5) >> 12;
  if ( (*(_BYTE *)(a1 + 13) & 7) == 0 )
    v9 = 0x7FFF;
  v11 = (_DWORD)v8 << *(_BYTE *)(a1 + 9);
  v49 = v9;
  if ( v7 )
  {
    v12 = v10 + v7;
    v13 = 0LL;
  }
  else
  {
    v13 = 2LL;
    v12 = v10;
  }
  if ( v10 >= v12 )
    return 0LL;
  while ( 2 )
  {
    v14 = v9 - (v9 & (v10 + v11)) + 1;
    if ( v14 >= v12 - v10 )
      v14 = v12 - v10;
    v15 = 1 << *(_BYTE *)(a1 + 9);
    v16 = *(_BYTE *)(a1 + 9);
    v45 = v14;
    v17 = -1;
    v18 = (unsigned __int64)v10 >> v16;
    v48 = -1;
    v47 = v18 << v16;
    v19 = v4 + 32 * v18;
    v46 = v10 & (v15 - 1);
    v20 = 0;
    v21 = v14 + v46 - 1;
    v22 = v46;
    v23 = ((v15 - 1) & v21) + 1;
    v24 = v19 + 32 * (v21 >> v16);
    v44 = v23;
    if ( !v46 )
    {
      LODWORD(v25) = v47;
      goto LABEL_10;
    }
    v37 = v15;
    if ( v19 == v24 )
      v37 = v23;
    v38 = *(unsigned __int8 *)(v19 + 25);
    if ( v13 <= 1 && v38 < v37 )
    {
      v39 = v37;
      v22 = *(unsigned __int8 *)(v19 + 25);
      v40 = v37;
LABEL_50:
      v41 = v47;
      v20 = v39 - v38;
      v48 = v47 + v40;
      v17 = v47 + v22;
      if ( v20 && v13 )
        *(_BYTE *)(v19 + 25) = v20 + v38;
      goto LABEL_54;
    }
    if ( v13 == 2 && v38 > v46 )
    {
      v39 = v10 & (v15 - 1);
      v40 = *(unsigned __int8 *)(v19 + 25);
      goto LABEL_50;
    }
    v41 = v47;
LABEL_54:
    v19 += 32LL;
    v25 = v15 + v41;
    v47 = v25;
LABEL_10:
    if ( v19 >= v24 )
      goto LABEL_11;
    do
    {
      v31 = *(unsigned __int8 *)(v19 + 25);
      v32 = 0;
      v46 = v17;
      LODWORD(v47) = v31;
      if ( v31 >= v15 || v13 > 1 )
      {
        if ( v13 != 2 || !v31 )
          goto LABEL_22;
        v42 = v31;
        v31 = v25;
        v32 = -v42;
        if ( v17 != -1 )
          v31 = v17;
        v17 = v31;
        LOBYTE(v31) = v47;
        v35 = v47;
      }
      else
      {
        v17 = v25 + v31;
        v32 = v15 - v31;
        v35 = v15;
        if ( v46 != -1 )
          v17 = v46;
      }
      v36 = v25 + v35;
      v48 = v36;
      if ( v32 )
      {
        v48 = v36;
        if ( v13 )
        {
          *(_BYTE *)(v19 + 25) = v32 + v31;
          v48 = v36;
        }
      }
LABEL_22:
      v20 += v32;
      v19 += 32LL;
      v25 = v15 + (unsigned int)v25;
    }
    while ( v19 < v24 );
    v9 = v49;
    v47 = v25;
LABEL_11:
    v26 = v17;
    if ( v19 == v24 )
    {
      v27 = *(unsigned __int8 *)(v19 + 25);
      v28 = 0;
      if ( v13 <= 1 && (v29 = v44, v27 < v44) )
      {
        v34 = v47;
        v28 = v44 - v27;
        v17 = v47 + v27;
        if ( v26 != -1 )
          v17 = v26;
LABEL_32:
        v48 = v34 + v29;
        if ( v28 )
        {
          v48 = v34 + v29;
          if ( v13 )
          {
            v48 = v34 + v29;
            *(_BYTE *)(v19 + 25) = v28 + v27;
          }
        }
      }
      else if ( v13 == 2 && *(_BYTE *)(v19 + 25) )
      {
        v34 = v47;
        v28 = -v27;
        v43 = v47;
        v29 = *(unsigned __int8 *)(v19 + 25);
        if ( v17 != -1 )
          v43 = v17;
        v17 = v43;
        goto LABEL_32;
      }
      v20 += v28;
    }
    if ( !v20 )
    {
LABEL_17:
      v10 += v45;
      if ( v10 >= v12 )
        return 0LL;
      continue;
    }
    break;
  }
  v46 = v17;
  v48 -= v17;
  if ( v20 <= 0 )
    v33 = 0x4000;
  else
    v33 = 4096;
  result = RtlpHpSegMgrCommit(a1, v20, v33, 0);
  if ( (int)result >= 0 )
  {
    if ( v20 > 0 )
      RtlpHpSegPageRangeHandleCommit(a1, v4, (unsigned int)&v46, (unsigned int)&v48, 1);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v20);
    *(_WORD *)(v4 + 28) = ~(v20 + ~*(_WORD *)(v4 + 28));
    goto LABEL_17;
  }
  return result;
}
