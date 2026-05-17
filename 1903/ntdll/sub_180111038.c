/*
 * XREFs of sub_180111038 @ 0x180111038
 * Callers:
 *     sub_18011138C @ 0x18011138C (sub_18011138C.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180111038(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  int v4; // edi
  int v5; // [rsp+50h] [rbp-B0h]
  __int64 v6; // [rsp+68h] [rbp-98h]
  _DWORD v7[44]; // [rsp+80h] [rbp-80h] BYREF

  memset(v7, 0, sizeof(v7));
  result = ZwQueryInformationProcess();
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741820 )
  {
    v3 = 160LL * v7[2];
    if ( v3 > 0xFFFFFFFF || (int)v3 + 176 < (unsigned int)v3 )
    {
      return 3221225621LL;
    }
    else
    {
      result = ZwCreateSection();
      if ( (int)result >= 0 )
      {
        v4 = ZwMapViewOfSection();
        if ( v4 >= 0 )
        {
          memset(0LL, 0, 0xB0uLL);
          if ( (int)ZwQueryInformationProcess() >= 0 )
          {
            ZwUnmapViewOfSection();
            *(_DWORD *)(a1 + 936) = v5;
            *(_QWORD *)(a1 + 944) = v6;
            *(_QWORD *)(a1 + 952) = MEMORY[0x7FFE0014];
            return 0LL;
          }
          else
          {
            ZwUnmapViewOfSection();
            return ZwClose();
          }
        }
        else
        {
          ZwClose();
          return (unsigned int)v4;
        }
      }
    }
  }
  return result;
}
