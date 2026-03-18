/*
 * XREFs of WmipTranslatePDOInstanceNames @ 0x140730098
 * Callers:
 *     WmipForwardWmiIrp @ 0x140696C4C (WmipForwardWmiIrp.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     IoGetDeviceInstanceName @ 0x1401744FC (IoGetDeviceInstanceName.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 */

__int64 __fastcall WmipTranslatePDOInstanceNames(__int64 a1, char a2, int a3, __int64 a4)
{
  unsigned int v4; // r12d
  unsigned int v5; // r10d
  void *v6; // r13
  unsigned int *v7; // r8
  void *v8; // rbp
  char *v9; // r15
  int v10; // r14d
  unsigned int v11; // r14d
  unsigned int v12; // esi
  unsigned int *v13; // rdi
  unsigned int v14; // eax
  void *v15; // r11
  unsigned int v16; // r9d
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rdx
  _DWORD *v22; // rsi
  unsigned int v23; // ecx
  unsigned __int16 v24; // r15
  int v25; // r13d
  unsigned int v26; // ebx
  wchar_t *Buffer; // rdx
  char *v28; // rdi
  wchar_t *v29; // rdx
  __int64 result; // rax
  __int64 v31; // rax
  unsigned int *v32; // rcx
  void *v33; // rax
  unsigned __int16 Length; // cx
  unsigned int v35; // esi
  __int64 v36; // rbx
  char *v37; // r15
  char v38; // [rsp+20h] [rbp-88h]
  char v39; // [rsp+21h] [rbp-87h]
  int v40; // [rsp+24h] [rbp-84h]
  unsigned int v41; // [rsp+28h] [rbp-80h]
  unsigned int v42; // [rsp+2Ch] [rbp-7Ch]
  unsigned int *v43; // [rsp+30h] [rbp-78h]
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-70h] BYREF
  void *v45; // [rsp+50h] [rbp-58h]

  v39 = 1;
  v4 = 0;
  v5 = 0;
  v38 = 0;
  v6 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v7 = *(unsigned int **)(a1 + 24);
  v8 = 0LL;
  v9 = 0LL;
  v10 = *(_DWORD *)(a1 + 56) + 1;
  UnicodeString.Buffer = 0LL;
  v43 = v7;
  v11 = v10 & 0xFFFFFFFE;
  v40 = 0;
  v12 = 0;
  v13 = v7;
  v41 = 0;
  do
  {
    v14 = 0;
    v42 = 0;
    if ( v13[4] )
    {
      v15 = 0LL;
      v45 = 0LL;
      while ( 1 )
      {
        v16 = v12;
        v17 = 8LL * v14;
        v18 = *(_QWORD *)&v13[v17 + 6] - WmipDataProviderPnpidGuid;
        if ( !v18 )
          v18 = *(_QWORD *)&v13[v17 + 8] - *((_QWORD *)&WmipDataProviderPnpidGuid + 1);
        if ( !v18 )
          goto LABEL_46;
        v19 = *(_QWORD *)&v13[v17 + 6] - WmipDataProviderPnPIdInstanceNamesGuid;
        if ( !v19 )
          v19 = *(_QWORD *)&v13[v17 + 8] - *((_QWORD *)&WmipDataProviderPnPIdInstanceNamesGuid + 1);
        if ( !v19 )
        {
LABEL_46:
          v39 = 0;
          if ( v8 )
          {
            ObfDereferenceObject(v8);
            v7 = v43;
            v8 = 0LL;
            v5 = v40;
            v16 = v12;
            v15 = v45;
          }
        }
        v20 = v13[v17 + 10];
        if ( (v20 & 0x20) == 0 )
          goto LABEL_11;
        if ( !v9 )
        {
          v31 = v7[1];
          v32 = v7;
          while ( (_DWORD)v31 )
          {
            v32 = (unsigned int *)((char *)v32 + v31);
            v31 = v32[1];
          }
          v9 = (char *)v32 + ((*v32 + 1) & 0xFFFFFFFE);
          v4 = a3 + (_DWORD)v7 - (_DWORD)v9;
        }
        v12 = v13[v17 + 11];
        v6 = *(void **)&v13[v17 + 12];
        if ( v16 >= v12 )
          v12 = v16;
        v41 = v12;
        if ( v6 == v15 )
        {
          v13[v17 + 12] = v5;
          v13[v17 + 10] = v20 | 8;
          goto LABEL_30;
        }
        if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v6, &UnicodeString) >= 0 )
          break;
LABEL_30:
        if ( a2 == 11 )
        {
          ObfDereferenceObject(v6);
          v41 = v12;
        }
LABEL_11:
        v7 = v43;
        v14 = v42 + 1;
        v5 = v40;
        v15 = v45;
        v42 = v14;
        if ( v14 >= v13[4] )
          goto LABEL_12;
      }
      if ( v39 )
      {
        if ( !v8 )
        {
          ObfReferenceObject(v6);
LABEL_39:
          v33 = v6;
          if ( v8 )
            v33 = v8;
          v8 = v33;
LABEL_42:
          Length = UnicodeString.Length;
          v35 = UnicodeString.Length + 4;
          v11 += v35;
          if ( v38 || v35 > v4 )
          {
            v38 = 1;
          }
          else
          {
            v13[v17 + 10] |= 8u;
            v45 = v6;
            v13[v17 + 12] = (_DWORD)v9 - (_DWORD)v13;
            v36 = Length;
            v40 = (_DWORD)v9 - (_DWORD)v13;
            *(_WORD *)v9 = Length + 2;
            v37 = v9 + 2;
            memmove(v37, UnicodeString.Buffer, Length);
            *(_WORD *)&v37[v36] = 95;
            v9 = &v37[v36 + 2];
            v4 -= v35;
          }
          RtlFreeAnsiString(&UnicodeString);
          v12 = v41;
          goto LABEL_30;
        }
        if ( v8 == v6 )
          goto LABEL_39;
      }
      v39 = 0;
      if ( v8 )
      {
        ObfDereferenceObject(v8);
        v8 = 0LL;
      }
      goto LABEL_42;
    }
LABEL_12:
    v21 = v13[1];
    v13 = (unsigned int *)((char *)v13 + v21);
  }
  while ( (_DWORD)v21 );
  if ( v39 && v8 )
  {
    if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v6, &UnicodeString) >= 0 )
    {
      v22 = (_DWORD *)((unsigned __int64)(v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v23 = (((_DWORD)v9 + 7) & 0xFFFFFFF8) - (_DWORD)v9;
      v24 = UnicodeString.Length;
      v25 = UnicodeString.Length;
      v26 = 2 * UnicodeString.Length + 96;
      v11 += v26 + v23;
      if ( v38 || v26 > v4 - v23 )
      {
        v38 = 1;
      }
      else if ( !*(_QWORD *)(a4 + 24) )
      {
        ObfReferenceObject(v8);
        *(_QWORD *)(a4 + 24) = v8;
        *(_DWORD *)(a4 + 52) = v41;
        v13[1] = (_DWORD)v22 - (_DWORD)v13;
        memset(v22, 0, 0x58uLL);
        Buffer = UnicodeString.Buffer;
        v22[4] = 2;
        *v22 = v26;
        v22[10] = 40;
        v22[11] = v41;
        v22[12] = 88;
        *(_OWORD *)(v22 + 6) = WmipDataProviderPnpidGuid;
        *((_WORD *)v22 + 44) = v24 + 2;
        v28 = (char *)v22 + 90;
        memmove((char *)v22 + 90, Buffer, v24);
        v29 = UnicodeString.Buffer;
        *(_WORD *)&v28[v24] = 95;
        v22[18] = 4;
        v22[19] = 1;
        v22[20] = v25 + 92;
        *(_OWORD *)(v22 + 14) = WmipDataProviderPnPIdInstanceNamesGuid;
        *(_WORD *)&v28[v24 + 2] = v24;
        memmove((char *)v22 + v24 + 94, v29, v24);
      }
      RtlFreeAnsiString(&UnicodeString);
    }
    ObfDereferenceObject(v8);
  }
  *v43 = v11;
  result = 4LL;
  if ( !v38 )
    result = v11;
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
