/*
 * XREFs of EtwpObjectTypeRundown @ 0x1408FB67C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryObject @ 0x1401C0E50 (ZwQueryObject.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpObjectTypeRundown(__int64 a1, char a2)
{
  unsigned __int16 *PoolWithTag; // rbx
  NTSTATUS Object; // eax
  unsigned __int16 v6; // r14
  unsigned __int16 *v7; // rdi
  unsigned int i; // esi
  unsigned int v9; // r8d
  __int64 v10; // rdx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-40h] BYREF
  __int16 v12; // [rsp+38h] [rbp-38h]
  _QWORD v13[3]; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]

  NumberOfBytes = 1024LL;
  PoolWithTag = 0LL;
  v12 = 0;
  while ( 1 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74777445u);
    if ( !PoolWithTag )
      break;
    Object = ZwQueryObject(0LL, ObjectTypesInformation, PoolWithTag, NumberOfBytes, (PULONG)&NumberOfBytes);
    if ( Object != -1073741820 )
    {
      if ( Object >= 0 )
      {
        HIWORD(NumberOfBytes) = 0;
        v13[1] = 4LL;
        v13[0] = (char *)&NumberOfBytes + 4;
        v6 = 4389 - (a2 != 0);
        v7 = PoolWithTag + 4;
        for ( i = 0;
              i < *(_DWORD *)PoolWithTag;
              v7 = (unsigned __int16 *)((char *)v7 + ((v7[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 104) )
        {
          if ( i )
          {
            v9 = *(_DWORD *)a1;
            v10 = *(_QWORD *)(a1 + 1080);
            WORD2(NumberOfBytes) = *((unsigned __int8 *)v7 + 90);
            v13[2] = *((_QWORD *)v7 + 1);
            v14 = *v7 + 2;
            v15 = 0;
            EtwpLogKernelEvent((__int64)v13, v10, v9, 2u, v6, 0x401802u);
          }
          ++i;
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      return;
    }
  }
}
