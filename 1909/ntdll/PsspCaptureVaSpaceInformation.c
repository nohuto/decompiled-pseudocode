/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x1801119F0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1801102D0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwQueryVirtualMemory @ 0x18009D2F0 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009D390 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D3D0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009D7D0 (NtCreateSection.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     PsspCaptureImageInformation @ 0x1801118E8 (PsspCaptureImageInformation.c)
 */

__int64 __fastcall PsspCaptureVaSpaceInformation(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // esi
  unsigned int v6; // r14d
  unsigned __int64 v7; // rbx
  char v8; // r15
  unsigned __int64 v9; // rcx
  int v10; // edx
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  int v13; // edi
  unsigned int v14; // r12d
  __int64 v15; // r14
  int v16; // r13d
  unsigned int v17; // r15d
  unsigned __int16 *v18; // rsi
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned __int16 *v21; // rdi
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int16 v24; // ax
  int VirtualMemory; // eax
  size_t v26; // r8
  unsigned __int16 v27; // r14
  HANDLE Handle; // [rsp+68h] [rbp-49h]
  _QWORD v29[6]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-11h]
  __int64 v31; // [rsp+A8h] [rbp-9h]
  __int64 v32; // [rsp+B0h] [rbp-1h]
  __int64 v33; // [rsp+B8h] [rbp+7h]
  char v36; // [rsp+130h] [rbp+7Fh]

  v4 = 0LL;
  v36 = 0;
  v5 = 0;
  v6 = 0;
  LODWORD(v7) = 0;
  v8 = 0;
  do
  {
    memset(v29, 0, sizeof(v29));
    if ( (int)ZwQueryVirtualMemory() < 0 )
      break;
    v9 = v29[0];
    if ( v29[0] != v4 )
      return 3221225793LL;
    if ( LODWORD(v29[5]) == 0x1000000 || (v10 = 0, LODWORD(v29[5]) == 0x40000) )
      v10 = 1;
    v6 += v10;
    if ( (a3 & 0x1000) != 0 && !v8 && (LODWORD(v29[5]) == 0x1000000 || LODWORD(v29[5]) == 0x40000) )
    {
      v32 = 0LL;
      v33 = 0LL;
      ZwQueryVirtualMemory();
      if ( (int)v7 + 8 < (unsigned int)v7 )
      {
        v8 = 1;
        LODWORD(v7) = -1;
        v36 = 1;
      }
      else
      {
        LODWORD(v7) = v7 + 8;
      }
      v9 = v29[0];
    }
    ++v5;
    v4 = v9 + v29[3];
  }
  while ( v9 + v29[3] >= v9 );
  v11 = 72LL * v5;
  if ( v11 > 0xFFFFFFFF )
    return 3221225621LL;
  if ( v8 )
  {
    v7 = 8LL * v6;
    if ( v7 > 0xFFFFFFFF )
      return 3221225621LL;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    if ( (int)v7 + 16 < (unsigned int)v7 )
      return 3221225621LL;
    LODWORD(v7) = v7 + 16;
  }
  if ( (_DWORD)v7 )
  {
    if ( (int)v11 + (int)v7 < (unsigned int)v11 )
      return 3221225621LL;
    LODWORD(v11) = v11 + v7;
  }
  v31 = (unsigned int)v11;
  result = NtCreateSection();
  if ( (int)result >= 0 )
  {
    v30 = 0LL;
    v13 = ZwMapViewOfSection();
    if ( v13 < 0 )
    {
      NtClose(Handle);
      return (unsigned int)v13;
    }
    v14 = v30;
    v15 = 0LL;
    v16 = 0;
    v17 = 0;
    v18 = 0LL;
    while ( 1 )
    {
      if ( v17 + 72 < v17 || v17 + 72 > v14 || (memset(v29, 0, sizeof(v29)), (int)ZwQueryVirtualMemory() < 0) )
      {
LABEL_59:
        NtUnmapViewOfSection();
        *(_QWORD *)(a1 + 920) = Handle;
        *(_DWORD *)(a1 + 912) = v16;
        *(_DWORD *)(a1 + 916) = v17;
        *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
        return 0LL;
      }
      if ( v29[0] != v15 )
        return 3221225793LL;
      memset(v18, 0, 0x48uLL);
      v19 = 72;
      *(_QWORD *)v18 = v29[0];
      *((_QWORD *)v18 + 1) = v29[1];
      *((_DWORD *)v18 + 4) = v29[2];
      *((_QWORD *)v18 + 3) = v29[3];
      *((_QWORD *)v18 + 4) = v29[4];
      *((_DWORD *)v18 + 10) = v29[5];
      if ( (a3 & 0x1000) != 0 )
      {
        if ( LODWORD(v29[5]) == 0x1000000 )
        {
          PsspCaptureImageInformation((__int64)(v18 + 24));
LABEL_40:
          if ( v17 + 76 < v17 || v17 + 76 > v14 )
            goto LABEL_59;
          if ( !v36 )
          {
            v20 = v17 + 92;
            if ( v17 + 92 >= v17 + 76 && v20 <= v14 )
            {
              v21 = v18 + 36;
              v36 = 0;
              v18[36] = 0;
              v22 = v14 - v20;
              if ( v14 - v20 >= (unsigned int)v7 )
                v22 = v7;
              v23 = v22;
              v24 = -1;
              if ( v23 < 0xFFFF )
                v24 = v23;
              v18[37] = v24;
              *((_QWORD *)v18 + 10) = v18 + 44;
              VirtualMemory = ZwQueryVirtualMemory();
              goto LABEL_52;
            }
            v36 = 1;
          }
          VirtualMemory = -1073741675;
          v21 = 0LL;
LABEL_52:
          if ( VirtualMemory < 0 )
          {
            v18[36] = 0;
            LODWORD(v7) = v7 - 2;
            v19 = 80;
          }
          else
          {
            v26 = *v21;
            if ( v26 + 2 > 0xFFFF )
            {
              v27 = 0;
            }
            else
            {
              v27 = v26 + 2;
              memmove(v21 + 1, *((const void **)v21 + 1), v26);
              *(unsigned __int16 *)((char *)v21 + *v21 + 2) = 0;
            }
            *v21 = v27;
            LODWORD(v7) = v7 - ((v27 + 9) & 0xFFFFFFF8);
            v19 = (v27 + 81) & 0xFFFFFFF8;
          }
          goto LABEL_58;
        }
        if ( LODWORD(v29[5]) == 0x40000 )
          goto LABEL_40;
      }
LABEL_58:
      v17 += v19;
      v15 = v29[0] + v29[3];
      ++v16;
      v18 = (unsigned __int16 *)((char *)v18 + v19);
      if ( v29[0] + v29[3] < v29[0] )
        goto LABEL_59;
    }
  }
  return result;
}
