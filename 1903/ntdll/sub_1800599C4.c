/*
 * XREFs of sub_1800599C4 @ 0x1800599C4
 * Callers:
 *     sub_1800598B0 @ 0x1800598B0 (sub_1800598B0.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     RtlReleaseRelativeName @ 0x180025F30 (RtlReleaseRelativeName.c)
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 */

__int64 __fastcall sub_1800599C4(__int64 a1, __int128 *a2, char a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v9; // r15
  __int64 v10; // rax
  int v11; // esi
  int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  _QWORD *v17; // rcx
  __int128 v19; // xmm0
  __int64 v20; // [rsp+50h] [rbp-69h] BYREF
  __int64 v21; // [rsp+58h] [rbp-61h] BYREF
  __int64 v22; // [rsp+60h] [rbp-59h] BYREF
  __int64 v23; // [rsp+68h] [rbp-51h] BYREF
  __int128 v24; // [rsp+70h] [rbp-49h] BYREF
  __int128 v25; // [rsp+80h] [rbp-39h] BYREF
  __int64 v26; // [rsp+90h] [rbp-29h]
  int v27; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-11h]
  __int128 *v29; // [rsp+B0h] [rbp-9h]
  int v30; // [rsp+B8h] [rbp-1h]
  __int128 v31; // [rsp+C0h] [rbp+7h]
  _BYTE v32[16]; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v33; // [rsp+110h] [rbp+57h] BYREF

  v33 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
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
          v26 = 0LL;
          v27 = 48;
          v24 = v19;
        }
        else
        {
          v12 = sub_180025F70(2, *((_QWORD *)a2 + 1), (int)&v24, 0LL, (__int64)&v25);
          if ( v12 < 0 )
            goto LABEL_25;
          v13 = *((_QWORD *)&v24 + 1);
          if ( (_WORD)v25 )
          {
            v14 = v26;
            v24 = v25;
          }
          else
          {
            v14 = 0LL;
            v26 = 0LL;
          }
          v27 = 48;
          v28 = v14;
          if ( v13 )
          {
LABEL_10:
            v29 = &v24;
            v30 = 64;
            v31 = 0LL;
            v12 = ZwOpenFile(&v33, 1048577LL, &v27, v32, 5, 96);
            if ( v13 )
            {
              RtlReleaseRelativeName((__int64)&v25);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
            }
            if ( v12 >= 0 )
            {
              v12 = ZwCreateSection(&v20, 983045LL, 0LL);
              if ( v12 >= 0 )
              {
                v22 = 0LL;
                v12 = ZwMapViewOfSection(v20, -1LL, &v21, 0LL, 0LL, &v22, &v23, 1, 0, v11);
                if ( v20 )
                {
                  ZwClose(v20);
                  v20 = 0LL;
                }
                if ( v12 >= 0 )
                {
                  v15 = RtlImageNtHeader(v21);
                  v16 = v12;
                  if ( !v15 )
                    v16 = -1073741701;
                  v12 = v16;
                  if ( v16 >= 0 )
                  {
                    v17 = a6;
                    *v9 = v21;
                    if ( v17 )
                      *v17 = v23;
                    if ( a4 )
                    {
                      *a4 = v33;
                    }
                    else if ( v33 )
                    {
                      ZwClose(v33);
                    }
                    return (unsigned int)v12;
                  }
                }
              }
            }
LABEL_25:
            if ( v33 )
            {
              ZwClose(v33);
              v33 = 0LL;
            }
            if ( v21 )
              ZwUnmapViewOfSection(-1LL);
            return (unsigned int)v12;
          }
        }
        v28 = 0LL;
        goto LABEL_10;
      }
    }
  }
  return 3221225485LL;
}
