/*
 * XREFs of sub_1800EB12C @ 0x1800EB12C
 * Callers:
 *     RtlGetSetBootStatusData @ 0x1800EAC40 (RtlGetSetBootStatusData.c)
 * Callees:
 *     ZwReadFile @ 0x18009C7A0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x18009C7E0 (ZwWriteFile.c)
 *     sub_1800EA8E8 @ 0x1800EA8E8 (sub_1800EA8E8.c)
 *     sub_1800EB25C @ 0x1800EB25C (sub_1800EB25C.c)
 */

__int64 __fastcall sub_1800EB12C(__int64 a1, char a2, unsigned int a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  __int64 result; // rax
  __int64 v10; // rdi
  int File; // ebx
  int v12; // eax
  __int64 v13; // rcx
  _DWORD v14[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp-8h]

  v15 = 0LL;
  result = ZwReadFile();
  if ( (int)result >= 0 )
  {
    result = sub_1800EA8E8(a3, &v15, v14);
    if ( (int)result >= 0 )
    {
      HIDWORD(v15) = 0;
      v10 = v14[0];
      if ( v14[0] + (unsigned __int64)(unsigned int)v15 <= v14[1] )
      {
        if ( a5 >= v14[0] )
        {
          if ( a2 )
          {
            File = ZwReadFile();
          }
          else
          {
            v12 = ZwWriteFile();
            LOBYTE(v13) = 1;
            File = v12;
            sub_1800EB25C(v13, a4, v15, v10);
          }
          if ( File >= 0 )
          {
            if ( a6 )
              *a6 = v16;
          }
          return (unsigned int)File;
        }
        else
        {
          return 3221225507LL;
        }
      }
      else
      {
        return 3221225561LL;
      }
    }
  }
  return result;
}
