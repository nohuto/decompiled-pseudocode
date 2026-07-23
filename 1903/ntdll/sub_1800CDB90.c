/*
 * XREFs of sub_1800CDB90 @ 0x1800CDB90
 * Callers:
 *     sub_1800CE068 @ 0x1800CE068 (sub_1800CE068.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     RtlInitAnsiStringEx @ 0x180021240 (RtlInitAnsiStringEx.c)
 *     sub_1800CDC50 @ 0x1800CDC50 (sub_1800CDC50.c)
 */

__int64 __fastcall sub_1800CDB90(__int64 a1)
{
  NTSTATUS inited; // esi
  unsigned __int64 v3; // r15
  NTSTATUS v4; // eax
  __int64 v5; // rbp
  DWORD v6; // ebx
  DWORD i; // edi
  __int64 v8; // rcx
  _STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  DWORD v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  inited = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL);
  v4 = sub_18001C4DC(v3, 1, 0xDu, &v11, &v12);
  v5 = v12;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = 0;
    for ( i = v11 >> 5; v6 < i; ++v6 )
    {
      v8 = *(unsigned int *)(32LL * v6 + v5 + 4);
      if ( !(_DWORD)v8 )
        break;
      inited = RtlInitAnsiStringEx(&DestinationString, (PCSZ)(v3 + v8));
      if ( inited < 0 )
        break;
      inited = sub_1800CDC50(a1, &DestinationString);
      if ( inited < 0 )
        break;
    }
  }
  return (unsigned int)inited;
}
