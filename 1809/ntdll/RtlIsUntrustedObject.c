/*
 * XREFs of RtlIsUntrustedObject @ 0x1800E7850
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlFindAceByType @ 0x180044F10 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtQuerySecurityObject @ 0x1800A2D50 (NtQuerySecurityObject.c)
 */

__int64 __fastcall RtlIsUntrustedObject(__int64 a1, __int64 a2, _BYTE *a3)
{
  char *Heap; // rbx
  char v5; // bp
  __int64 result; // rax
  int SecurityObject; // esi
  __int64 v8; // rdi
  unsigned __int8 *AceByType; // rax
  unsigned int v10; // [rsp+30h] [rbp-C8h]
  unsigned int v11[3]; // [rsp+34h] [rbp-C4h] BYREF
  char v12; // [rsp+40h] [rbp-B8h] BYREF

  *a3 = 1;
  Heap = &v12;
  if ( !a2 && a1 )
  {
    v5 = 0;
    result = NtQuerySecurityObject();
    SecurityObject = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741789 )
        return result;
      Heap = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v10);
      if ( !Heap )
        return (unsigned int)(SecurityObject - 12);
      v5 = 1;
      SecurityObject = NtQuerySecurityObject();
      if ( SecurityObject < 0 )
      {
LABEL_21:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
        return (unsigned int)SecurityObject;
      }
    }
    if ( (Heap[2] & 0x10) != 0 )
    {
      if ( *((__int16 *)Heap + 1) >= 0 )
      {
        v8 = *((_QWORD *)Heap + 3);
      }
      else
      {
        if ( !*((_DWORD *)Heap + 3) )
          goto LABEL_19;
        v8 = (__int64)&Heap[*((unsigned int *)Heap + 3)];
      }
      if ( v8 )
      {
        v11[0] = 0;
        while ( 1 )
        {
          AceByType = RtlFindAceByType(v8, 17, v11);
          if ( !AceByType )
            break;
          if ( (AceByType[1] & 8) == 0 )
          {
            if ( !AceByType[9] || *(_DWORD *)&AceByType[4 * AceByType[9] + 12] < 0x2000u )
              goto LABEL_20;
            break;
          }
        }
      }
    }
LABEL_19:
    *a3 = 0;
LABEL_20:
    if ( !v5 )
      return (unsigned int)SecurityObject;
    goto LABEL_21;
  }
  return 3221225485LL;
}
