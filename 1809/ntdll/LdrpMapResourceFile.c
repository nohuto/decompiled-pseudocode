/*
 * XREFs of LdrpMapResourceFile @ 0x18002A918
 * Callers:
 *     LdrMapAndVerifyResourceFile @ 0x18003A040 (LdrMapAndVerifyResourceFile.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlImageNtHeader @ 0x180028AB0 (RtlImageNtHeader.c)
 *     RtlReleaseRelativeName @ 0x1800347B0 (RtlReleaseRelativeName.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800349B4 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0C20 (NtCreateSection.c)
 *     ZwCreateFile @ 0x1800A0D80 (ZwCreateFile.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, __int128 *a2, char a3, HANDLE *a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v9; // r15
  __int64 v10; // rax
  int v11; // esi
  int v12; // ebx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  _QWORD *v17; // rcx
  __int128 v19; // xmm0
  HANDLE Handle; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int64 v21[2]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v22; // [rsp+78h] [rbp-51h]
  __int128 v23; // [rsp+80h] [rbp-49h] BYREF
  __int128 v24; // [rsp+90h] [rbp-39h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-29h]
  int v26; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-11h]
  __int128 *v28; // [rsp+C0h] [rbp-9h]
  int v29; // [rsp+C8h] [rbp-1h]
  __int128 v30; // [rsp+D0h] [rbp+7h]
  _BYTE v31[16]; // [rsp+E0h] [rbp+17h] BYREF
  HANDLE v32; // [rsp+120h] [rbp+57h] BYREF

  v32 = 0LL;
  Handle = 0LL;
  v21[0] = 0LL;
  v22 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v10 )
        {
          v12 = -1073741701;
          goto LABEL_25;
        }
        v11 = *(_WORD *)(v10 + 72) < 6u ? 8 : 2;
        if ( a3 )
        {
          v19 = *a2;
          v13 = 0LL;
          v25 = 0LL;
          v26 = 48;
          v23 = v19;
        }
        else
        {
          v12 = RtlpDosPathNameToRelativeNtPathName_U(2, *((_QWORD *)a2 + 1), (unsigned int)&v23, 0, (__int64)&v24);
          if ( v12 < 0 )
            goto LABEL_25;
          v13 = *((_QWORD *)&v23 + 1);
          if ( (_WORD)v24 )
          {
            v14 = v25;
            v23 = v24;
          }
          else
          {
            v14 = 0LL;
            v25 = 0LL;
          }
          v26 = 48;
          v27 = v14;
          if ( v13 )
          {
LABEL_10:
            v29 = 64;
            v28 = &v23;
            v30 = 0LL;
            v12 = ZwCreateFile(&v32, 2148532352LL, &v26, v31, 0LL, 0, 5, 1, 0, 0LL, 0);
            if ( v13 )
            {
              RtlReleaseRelativeName(&v24);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
            }
            if ( v12 >= 0 )
            {
              v12 = NtCreateSection(&Handle, 983045LL, 0LL, 0LL, v11, 0x8000000, v32);
              if ( v12 >= 0 )
              {
                v21[1] = 0LL;
                v12 = ZwMapViewOfSection(Handle, -1LL, v21);
                if ( Handle )
                {
                  NtClose(Handle);
                  Handle = 0LL;
                }
                if ( v12 >= 0 )
                {
                  v15 = RtlImageNtHeader(v21[0]);
                  v16 = v12;
                  if ( !v15 )
                    v16 = -1073741701;
                  v12 = v16;
                  if ( v16 >= 0 )
                  {
                    v17 = a6;
                    *v9 = v21[0];
                    if ( v17 )
                      *v17 = v22;
                    if ( a4 )
                    {
                      *a4 = v32;
                    }
                    else if ( v32 )
                    {
                      NtClose(v32);
                    }
                    return (unsigned int)v12;
                  }
                }
              }
            }
LABEL_25:
            if ( v32 )
            {
              NtClose(v32);
              v32 = 0LL;
            }
            if ( v21[0] )
              NtUnmapViewOfSection(-1LL);
            return (unsigned int)v12;
          }
        }
        v27 = 0LL;
        goto LABEL_10;
      }
    }
  }
  return 3221225485LL;
}
