/*
 * XREFs of RtlQueryProcessHeapInformation @ 0x1800D7490
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     sub_180016F74 @ 0x180016F74 (sub_180016F74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlQueryHeapInformation @ 0x180067610 (RtlQueryHeapInformation.c)
 *     sub_18006790C @ 0x18006790C (sub_18006790C.c)
 *     RtlCommitDebugInfo_0 @ 0x180075708 (RtlCommitDebugInfo_0.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800D7CC0 @ 0x1800D7CC0 (sub_1800D7CC0.c)
 */

__int64 __fastcall RtlQueryProcessHeapInformation(__int64 a1)
{
  char *v2; // rax
  char *v3; // r14
  unsigned int v4; // r13d
  int HeapInformation; // ebx
  __int64 v7; // rdi
  char *v8; // rax
  char *v9; // r15
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  char *v14; // rax
  char *v15; // rdi
  __int64 v16; // rdx
  size_t v17; // rcx
  unsigned int i; // r15d
  wchar_t *v19; // rcx
  unsigned int j; // ecx
  int v21; // ecx
  _QWORD v22[4]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-88h] BYREF
  int v24; // [rsp+80h] [rbp-78h]
  __int64 (__fastcall *v25)(); // [rsp+88h] [rbp-70h]
  _QWORD *v26; // [rsp+90h] [rbp-68h]
  unsigned int Size; // [rsp+100h] [rbp+8h]
  size_t Sizea; // [rsp+100h] [rbp+8h]
  __int64 v29; // [rsp+108h] [rbp+10h]

  *(_QWORD *)(a1 + 152) = NtCurrentPeb()->ProcessHeap;
  v2 = RtlCommitDebugInfo_0((_QWORD *)a1, 8u);
  v3 = v2;
  v4 = 0;
  if ( !v2 )
    return 3221225495LL;
  *(_DWORD *)v2 = 0;
  *(_QWORD *)(a1 + 112) = v2;
  RtlEnterCriticalSection((__int64)&unk_180163BE0);
  HeapInformation = sub_18006790C((__int64)sub_1800D8110, a1, 2);
  if ( HeapInformation < 0 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v7 = qword_180166968;
    if ( qword_180166968 && *(_QWORD *)(qword_180166968 + 232) )
    {
      v8 = RtlCommitDebugInfo_0((_QWORD *)a1, 0x58u);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x58uLL);
        *(_QWORD *)v9 = v7;
        *((_DWORD *)v9 + 2) = *(_DWORD *)(v7 + 112);
        *((_WORD *)v9 + 6) = 16;
        ++*(_DWORD *)v3;
        goto LABEL_10;
      }
LABEL_8:
      HeapInformation = -1073741801;
      goto LABEL_32;
    }
LABEL_10:
    while ( v4 < *(_DWORD *)v3 )
    {
      v10 = 88LL * v4;
      v11 = *(_QWORD *)(a1 + 128);
      if ( !v11 || v11 == *(_QWORD *)&v3[v10 + 8] )
      {
        v29 = *(_QWORD *)&v3[v10 + 8];
        v12 = *(unsigned __int16 *)(v29 + 224);
        *(_DWORD *)&v3[v10 + 40] = v12;
        v13 = 72 * v12;
        Size = 72 * v12;
        if ( *(_QWORD *)(v29 + 328) )
        {
          *(_DWORD *)&v3[v10 + 40] = v12 + 129;
          v13 += 9288;
          Size = v13;
        }
        v14 = RtlCommitDebugInfo_0((_QWORD *)a1, v13);
        v15 = v14;
        if ( !v14 )
          goto LABEL_8;
        memset(v14, 0, Size);
        *(_QWORD *)&v3[v10 + 80] = v15;
        v16 = v29;
        v17 = *(_QWORD *)(v29 + 328);
        Sizea = v17;
        if ( v17 )
        {
          *(_DWORD *)&v3[v10 + 48] = 129;
          *(_DWORD *)&v3[v10 + 52] = 16;
          for ( i = 0; i <= 0x80; ++i )
          {
            *(_DWORD *)v15 = *(_DWORD *)v17;
            *((_DWORD *)v15 + 1) = *(_DWORD *)(v17 + 4);
            *((_QWORD *)v15 + 1) = 16LL * *(_QWORD *)(v17 + 8);
            *((_WORD *)v15 + 8) = i | 0x8000;
            v19 = (wchar_t *)(v15 + 20);
            if ( i >= 0x80 )
              sub_180016F74(v19, 0x30uLL, (__int64)L"VirtualAlloc");
            else
              sub_1800D7CC0(v19);
            v15 += 72;
            v17 = Sizea + 16;
            Sizea += 16LL;
          }
          v16 = v29;
        }
        memmove(v15, *(const void **)(v16 + 232), 72LL * *(unsigned __int16 *)(v16 + 224));
        for ( j = 0; j < *(unsigned __int16 *)(v29 + 224); ++j )
        {
          *((_QWORD *)v15 + 1) *= 16LL;
          v15 += 72;
        }
      }
      ++v4;
    }
  }
  if ( HeapInformation >= 0 )
  {
    v21 = *(_DWORD *)(a1 + 64);
    if ( (v21 & 0x210) != 0 )
    {
      v23[0] = -1LL;
      v23[1] = *(_QWORD *)(a1 + 128);
      v25 = sub_1800D8790;
      v26 = v22;
      v24 = (v21 & 0x10) != 0 ? 5 : 3;
      memset(v22, 0, sizeof(v22));
      v22[0] = a1;
      v22[1] = v3;
      LODWORD(v22[2]) = 0;
      v22[3] = v3 + 8;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v23, 0x58uLL, 0LL);
    }
  }
LABEL_32:
  RtlLeaveCriticalSection((__int64)&unk_180163BE0);
  return (unsigned int)HeapInformation;
}
