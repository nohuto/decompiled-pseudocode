/*
 * XREFs of sub_18006DB18 @ 0x18006DB18
 * Callers:
 *     sub_18006DA5C @ 0x18006DA5C (sub_18006DA5C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_18006DAD4 @ 0x18006DAD4 (sub_18006DAD4.c)
 *     sub_18006DD60 @ 0x18006DD60 (sub_18006DD60.c)
 *     sub_18006DD9C @ 0x18006DD9C (sub_18006DD9C.c)
 *     sub_18006DE00 @ 0x18006DE00 (sub_18006DE00.c)
 */

__int64 __fastcall sub_18006DB18(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // rcx
  bool v6; // cc
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  int v19; // r8d
  __int16 v20; // r14
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+20h] [rbp-20h] BYREF
  __int64 v23; // [rsp+28h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int *v25; // [rsp+60h] [rbp+20h] BYREF

  v22 = a1;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  result = RtlImageNtHeaderEx(3, a1, 0LL, &v25);
  if ( (int)result >= 0 )
  {
    v5 = v25;
    *(_DWORD *)a2 = v25[2];
    *(_DWORD *)(a2 + 4) = v5[22];
    v6 = v5[33] <= 2;
    result = v5[20];
    v23 = result;
    if ( !v6 )
    {
      result = v5[38];
      if ( (_DWORD)result )
      {
        if ( v5[39] >= 0x10 )
        {
          result = (unsigned int)-sub_18006DD60(&v22, a1 + result, 16LL);
          v8 = v7 & -(__int64)((_DWORD)result != 0);
          if ( v8 )
          {
            result = sub_18006DAD4(
                       (__int64)&v22,
                       v7 & -(__int64)((_DWORD)result != 0),
                       *(unsigned __int16 *)((v7 & -(__int64)((_DWORD)result != 0)) + 0xC));
            if ( result )
            {
              result = ((__int64 (__fastcall *)(unsigned __int64 *, __int64, _QWORD, __int64))sub_18006DD9C)(
                         &v22,
                         result,
                         *(unsigned __int16 *)(v8 + 14),
                         16LL);
              if ( result )
              {
                v9 = *(unsigned int *)(result + 4);
                LODWORD(v9) = v9 & 0x7FFFFFFF;
                result = sub_18006DD60(&v22, v8 + v9, 16LL);
                if ( (_DWORD)result )
                {
                  result = sub_18006DAD4((__int64)&v22, v10, *(unsigned __int16 *)(v11 + 12));
                  if ( result )
                  {
                    result = ((__int64 (__fastcall *)(unsigned __int64 *, __int64, _QWORD, __int64))sub_18006DD9C)(
                               &v22,
                               result,
                               *(unsigned __int16 *)(v12 + 14),
                               1LL);
                    if ( result )
                    {
                      v13 = *(unsigned int *)(result + 4);
                      LODWORD(v13) = v13 & 0x7FFFFFFF;
                      result = sub_18006DD60(&v22, v8 + v13, 16LL);
                      if ( (_DWORD)result )
                      {
                        result = sub_18006DAD4((__int64)&v22, v14, 0);
                        if ( result )
                        {
                          if ( *(int *)(result + 4) >= 0 )
                          {
                            result = sub_18006DD60(&v22, v8 + *(unsigned int *)(result + 4), 16LL);
                            if ( (_DWORD)result )
                            {
                              if ( v15[1] >= 0x5C )
                              {
                                result = (unsigned int)-sub_18006DD60(&v22, a1 + *v15, 92LL);
                                v18 = v16 & -(__int64)((_DWORD)result != 0);
                                if ( v18 )
                                {
                                  result = sub_18006DD60(&v22, v16 & -(__int64)((_DWORD)result != 0), v17);
                                  if ( (_DWORD)result )
                                  {
                                    v20 = v19 - 60;
                                    result = sub_18006DD60(&v22, v18 + 6, (unsigned int)(v19 - 60));
                                    if ( (_DWORD)result )
                                    {
                                      RtlInitUnicodeString(&DestinationString, L"VS_VERSION_INFO");
                                      v23 = v18 + 6;
                                      result = sub_18006DE00(v18 + 6, v21, &v25);
                                      if ( (int)result >= 0 )
                                      {
                                        LOWORD(v22) = (_WORD)v25;
                                        WORD1(v22) = v20;
                                        result = RtlCompareUnicodeString(
                                                   &DestinationString.Length,
                                                   (unsigned __int16 *)&v22,
                                                   0);
                                        if ( !(_DWORD)result )
                                        {
                                          *(_DWORD *)(a2 + 8) = *(_DWORD *)(v18 + 48);
                                          result = *(unsigned int *)(v18 + 52);
                                          *(_DWORD *)(a2 + 12) = result;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
