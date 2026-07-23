/*
 * XREFs of RtlpCombineAcls @ 0x1800455AC
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x18007C620 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlFirstFreeAce @ 0x180040DD0 (RtlFirstFreeAce.c)
 *     RtlCreateAcl @ 0x180044270 (RtlCreateAcl.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        ACL **a7,
        _DWORD *a8)
{
  unsigned __int8 *v8; // r12
  ACL *v11; // rbp
  ULONG v12; // ebx
  _DWORD *v14; // r8
  int v15; // r14d
  unsigned int v16; // r9d
  unsigned __int8 *v17; // r10
  unsigned int j; // r11d
  unsigned int v19; // ecx
  unsigned int v20; // edx
  int v21; // eax
  NTSTATUS Acl; // edi
  unsigned int v23; // eax
  ULONG v24; // r14d
  ACL *Heap; // rax
  char *v26; // rbx
  unsigned __int16 *v27; // rsi
  unsigned int jj; // r14d
  __int64 v29; // rax
  unsigned __int8 *v30; // r15
  unsigned __int8 *v31; // r15
  unsigned __int8 *v32; // r15
  unsigned __int8 *v33; // r10
  unsigned int i; // r11d
  unsigned __int8 v35; // al
  unsigned int v36; // esi
  unsigned int v37; // ecx
  unsigned int v38; // edx
  int v39; // eax
  unsigned __int8 *v40; // r10
  unsigned int k; // r11d
  unsigned int v42; // esi
  unsigned __int8 *v43; // r10
  unsigned int m; // r11d
  unsigned int v45; // esi
  unsigned __int8 *v46; // r10
  unsigned int n; // r11d
  unsigned int v48; // esi
  unsigned __int8 *v49; // r10
  unsigned int ii; // r11d
  unsigned int v51; // esi
  unsigned __int16 *v52; // rsi
  unsigned int v53; // r14d
  unsigned __int8 v54; // al
  __int64 v55; // rax
  unsigned __int16 *v56; // rsi
  unsigned int kk; // r14d
  __int64 v58; // rax
  unsigned __int16 *v59; // rsi
  unsigned int v60; // r14d
  __int64 v61; // rax
  unsigned __int16 *v62; // rsi
  unsigned int v63; // r14d
  __int64 v64; // rax
  unsigned __int16 *v65; // rsi
  unsigned int v66; // r14d
  __int64 v67; // rax
  unsigned int v68; // ecx
  unsigned int v69; // edx
  int v70; // eax
  unsigned int v71; // ecx
  unsigned int v72; // edx
  int v73; // eax
  unsigned int v74; // ecx
  unsigned int v75; // edx
  int v76; // eax
  unsigned int v77; // ecx
  unsigned int v78; // edx
  int v79; // eax
  PVOID FirstFree; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 *v81; // [rsp+70h] [rbp+18h]
  unsigned __int8 *v82; // [rsp+78h] [rbp+20h]

  v82 = a4;
  v81 = a3;
  v8 = a5;
  FirstFree = 0LL;
  v11 = 0LL;
  v12 = 2;
  if ( !a1 && !a2 && !a3 && !a4 && !a5 && !a6 )
  {
    *a7 = 0LL;
    return 0LL;
  }
  v14 = a8;
  v15 = -1;
  v16 = 8;
  if ( a1 )
  {
    v33 = a1 + 8;
    for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v33 += *((unsigned __int16 *)v33 + 1) )
    {
      v35 = *v33;
      v36 = v16;
      if ( *v33 >= 2u && (v35 <= 3u || v35 > 6u && (v35 <= 8u || (unsigned __int8)(v35 - 13) <= 3u)) )
      {
        v37 = v16;
        v38 = v16 + *((unsigned __int16 *)v33 + 1);
        v39 = -1;
        if ( v38 >= v16 )
          v39 = v16 + *((unsigned __int16 *)v33 + 1);
        v16 = v39;
        Acl = v38 < v37 ? 0xC0000095 : 0;
        if ( v38 < v36 )
          goto LABEL_41;
        if ( v14 )
          *v14 |= 8u;
        if ( *a1 > v12 )
          v12 = *a1;
      }
      ++i;
    }
  }
  if ( a2 )
  {
    v17 = a2 + 8;
    for ( j = 0; j < *((unsigned __int16 *)a2 + 2); v17 += *((unsigned __int16 *)v17 + 1) )
    {
      if ( *v17 == 17 )
      {
        v19 = v16;
        v20 = v16 + *((unsigned __int16 *)v17 + 1);
        v21 = -1;
        if ( v20 >= v16 )
          v21 = v16 + *((unsigned __int16 *)v17 + 1);
        v16 = v21;
        Acl = v20 < v19 ? 0xC0000095 : 0;
        if ( v20 < v19 )
          goto LABEL_41;
        if ( v14 )
          *v14 |= 0x10u;
        if ( *a2 > v12 )
          v12 = *a2;
      }
      ++j;
    }
  }
  if ( v8 )
  {
    v40 = v8 + 8;
    for ( k = 0; k < *((unsigned __int16 *)v8 + 2); v40 += *((unsigned __int16 *)v40 + 1) )
    {
      v42 = v16;
      if ( *v40 == 20 )
      {
        v68 = v16;
        v69 = v16 + *((unsigned __int16 *)v40 + 1);
        v70 = -1;
        if ( v69 >= v16 )
          v70 = v16 + *((unsigned __int16 *)v40 + 1);
        v16 = v70;
        Acl = v69 < v68 ? 0xC0000095 : 0;
        if ( v69 < v42 )
          goto LABEL_41;
        if ( v14 )
          *v14 |= 0x80u;
        if ( *v8 > v12 )
          v12 = *v8;
      }
      ++k;
    }
  }
  if ( a6 )
  {
    v43 = a6 + 8;
    for ( m = 0; m < *((unsigned __int16 *)a6 + 2); v43 += *((unsigned __int16 *)v43 + 1) )
    {
      v45 = v16;
      if ( *v43 == 21 )
      {
        v71 = v16;
        v72 = v16 + *((unsigned __int16 *)v43 + 1);
        v73 = -1;
        if ( v72 >= v16 )
          v73 = v16 + *((unsigned __int16 *)v43 + 1);
        v16 = v73;
        Acl = v72 < v71 ? 0xC0000095 : 0;
        if ( v72 < v45 )
          goto LABEL_41;
        if ( v14 )
          *v14 |= 0x100u;
        if ( *a6 > v12 )
          v12 = *a6;
      }
      ++m;
    }
  }
  if ( v81 )
  {
    v46 = v81 + 8;
    for ( n = 0; n < *((unsigned __int16 *)v81 + 2); v46 += *((unsigned __int16 *)v46 + 1) )
    {
      v48 = v16;
      if ( *v46 == 18 )
      {
        v74 = v16;
        v75 = v16 + *((unsigned __int16 *)v46 + 1);
        v76 = -1;
        if ( v75 >= v16 )
          v76 = v16 + *((unsigned __int16 *)v46 + 1);
        v16 = v76;
        Acl = v75 < v74 ? 0xC0000095 : 0;
        if ( v75 < v48 )
          goto LABEL_41;
        if ( v14 )
          *v14 |= 0x20u;
        if ( *v81 > v12 )
          v12 = *v81;
      }
      ++n;
    }
  }
  if ( v82 )
  {
    v49 = v82 + 8;
    for ( ii = 0; ii < *((unsigned __int16 *)v82 + 2); v49 += *((unsigned __int16 *)v49 + 1) )
    {
      v51 = v16;
      if ( *v49 == 19 )
      {
        v77 = v16;
        v78 = v16 + *((unsigned __int16 *)v49 + 1);
        v79 = -1;
        if ( v78 >= v16 )
          v79 = v16 + *((unsigned __int16 *)v49 + 1);
        v16 = v79;
        Acl = v78 < v77 ? 0xC0000095 : 0;
        if ( v78 < v51 )
          goto LABEL_41;
        if ( v14 )
          *v14 |= 0x40u;
        if ( *v82 > v12 )
          v12 = *v82;
      }
      ++ii;
    }
  }
  v23 = v16 + 3;
  if ( v16 + 3 >= v16 )
    v15 = v16 + 3;
  Acl = v23 < v16 ? 0xC0000095 : 0;
  if ( v23 >= v16 )
  {
    v24 = v15 & 0xFFFFFFFC;
    Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v24);
    v11 = Heap;
    if ( !Heap )
    {
      Acl = -1073741801;
      goto LABEL_42;
    }
    Acl = RtlCreateAcl(Heap, v24, v12);
    if ( Acl >= 0 )
    {
      if ( RtlFirstFreeAce(v11, &FirstFree) )
      {
        if ( a1 && (v52 = (unsigned __int16 *)(a1 + 8), v53 = 0, *((_WORD *)a1 + 2)) )
        {
          v26 = (char *)FirstFree;
          do
          {
            v54 = *(_BYTE *)v52;
            if ( *(_BYTE *)v52 >= 2u && (v54 <= 3u || v54 > 6u && (v54 <= 8u || (unsigned __int8)(v54 - 13) <= 3u)) )
            {
              memmove(v26, v52, v52[1]);
              ++v11->AceCount;
              v55 = v52[1];
              v26 += v55;
            }
            else
            {
              LOWORD(v55) = v52[1];
            }
            ++v53;
            v52 = (unsigned __int16 *)((char *)v52 + (unsigned __int16)v55);
          }
          while ( v53 < *((unsigned __int16 *)a1 + 2) );
        }
        else
        {
          v26 = (char *)FirstFree;
        }
        if ( a2 )
        {
          v27 = (unsigned __int16 *)(a2 + 8);
          for ( jj = 0; jj < *((unsigned __int16 *)a2 + 2); v27 = (unsigned __int16 *)((char *)v27
                                                                                     + (unsigned __int16)v29) )
          {
            if ( *(_BYTE *)v27 == 17 )
            {
              memmove(v26, v27, v27[1]);
              ++v11->AceCount;
              v29 = v27[1];
              v26 += v29;
            }
            else
            {
              LOWORD(v29) = v27[1];
            }
            ++jj;
          }
        }
        if ( v8 )
        {
          v56 = (unsigned __int16 *)(v8 + 8);
          for ( kk = 0; kk < *((unsigned __int16 *)v8 + 2); v56 = (unsigned __int16 *)((char *)v56
                                                                                     + (unsigned __int16)v58) )
          {
            if ( *(_BYTE *)v56 == 20 )
            {
              memmove(v26, v56, v56[1]);
              ++v11->AceCount;
              v58 = v56[1];
              v26 += v58;
            }
            else
            {
              LOWORD(v58) = v56[1];
            }
            ++kk;
          }
        }
        v30 = a6;
        if ( a6 )
        {
          v59 = (unsigned __int16 *)(a6 + 8);
          v60 = 0;
          if ( *((_WORD *)a6 + 2) )
          {
            do
            {
              if ( *(_BYTE *)v59 == 21 )
              {
                memmove(v26, v59, v59[1]);
                ++v11->AceCount;
                v61 = v59[1];
                v26 += v61;
              }
              else
              {
                LOWORD(v61) = v59[1];
              }
              ++v60;
              v59 = (unsigned __int16 *)((char *)v59 + (unsigned __int16)v61);
            }
            while ( v60 < *((unsigned __int16 *)v30 + 2) );
          }
        }
        v31 = v81;
        if ( v81 )
        {
          v62 = (unsigned __int16 *)(v81 + 8);
          v63 = 0;
          if ( *((_WORD *)v81 + 2) )
          {
            do
            {
              if ( *(_BYTE *)v62 == 18 )
              {
                memmove(v26, v62, v62[1]);
                ++v11->AceCount;
                v64 = v62[1];
                v26 += v64;
              }
              else
              {
                LOWORD(v64) = v62[1];
              }
              ++v63;
              v62 = (unsigned __int16 *)((char *)v62 + (unsigned __int16)v64);
            }
            while ( v63 < *((unsigned __int16 *)v31 + 2) );
          }
        }
        v32 = v82;
        if ( v82 )
        {
          v65 = (unsigned __int16 *)(v82 + 8);
          v66 = 0;
          if ( *((_WORD *)v82 + 2) )
          {
            do
            {
              if ( *(_BYTE *)v65 == 19 )
              {
                memmove(v26, v65, v65[1]);
                ++v11->AceCount;
                v67 = v65[1];
                v26 += v67;
              }
              else
              {
                LOWORD(v67) = v65[1];
              }
              ++v66;
              v65 = (unsigned __int16 *)((char *)v65 + (unsigned __int16)v67);
            }
            while ( v66 < *((unsigned __int16 *)v32 + 2) );
          }
        }
        goto LABEL_41;
      }
      Acl = -1073741699;
    }
LABEL_142:
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      v11 = 0LL;
    }
    goto LABEL_42;
  }
LABEL_41:
  if ( Acl < 0 )
    goto LABEL_142;
LABEL_42:
  *a7 = v11;
  return (unsigned int)Acl;
}
