/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x1800ED810
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtReadFile @ 0x1800A03A0 (NtReadFile.c)
 *     RtlBootStatusItemInfo @ 0x1800ED7D8 (RtlBootStatusItemInfo.c)
 */

__int64 __fastcall RtlCheckBootStatusIntegrity(__int64 a1, bool *a2)
{
  char v3; // r14
  int File; // ebx
  unsigned __int64 Heap; // rsi
  __int64 v6; // rax
  _BYTE *v7; // rcx
  int v9; // [rsp+50h] [rbp-20h] BYREF
  __int64 v10; // [rsp+58h] [rbp-18h]
  __int64 v11; // [rsp+68h] [rbp-8h]
  unsigned int v12; // [rsp+B0h] [rbp+40h]
  int v13; // [rsp+B8h] [rbp+48h] BYREF

  v10 = 0LL;
  v3 = 0;
  File = NtReadFile();
  if ( File >= 0 )
  {
    File = RtlBootStatusItemInfo(0xFu, &v9, &v13);
    if ( File >= 0 )
    {
      if ( v12 < v13 + v9 || v12 > 0x800 )
      {
        *a2 = 0;
      }
      else
      {
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
        if ( Heap )
        {
          File = NtReadFile();
          if ( File >= 0 )
          {
            v6 = v12;
            if ( v11 == v12 )
            {
              if ( v12 )
              {
                v7 = (_BYTE *)Heap;
                do
                {
                  v3 += *v7++;
                  --v6;
                }
                while ( v6 );
              }
              *a2 = v3 == 0;
            }
            else
            {
              *a2 = 0;
            }
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)File;
}
