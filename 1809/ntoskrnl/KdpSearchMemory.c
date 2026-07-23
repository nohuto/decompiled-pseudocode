/*
 * XREFs of KdpSearchMemory @ 0x140917C40
 * Callers:
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MmDbgCopyMemory @ 0x1402BB7D0 (MmDbgCopyMemory.c)
 *     KdpQuickMoveMemory @ 0x140919B04 (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpSearchMemory(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v4; // r14d
  unsigned int v5; // edx
  __int64 v6; // rdi
  unsigned __int64 v7; // r10
  __int64 v8; // r8
  unsigned int v9; // ebx
  struct _SINGLE_LIST_ENTRY *v10; // rdi
  unsigned __int64 v11; // r10
  unsigned int v12; // ecx
  __int64 v13; // r15
  __int64 v14; // r14
  unsigned int v15; // r12d
  _BYTE *v16; // r14
  char *v17; // r13
  struct _SINGLE_LIST_ENTRY v19; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-31h]
  unsigned int v21; // [rsp+3Ch] [rbp-2Dh]
  __int64 v22; // [rsp+40h] [rbp-29h]
  unsigned __int64 v23; // [rsp+48h] [rbp-21h]
  int v24; // [rsp+50h] [rbp-19h] BYREF
  __int64 v25; // [rsp+58h] [rbp-11h]
  _DWORD v26[4]; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v27[4]; // [rsp+70h] [rbp+7h]

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a1 + 32);
  v5 = -1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v6 + *(_QWORD *)(a1 + 24);
  v22 = v2;
  v23 = v7;
  v20 = v4;
  *(_DWORD *)(a1 + 8) = -2147483622;
  if ( v4 <= 3 )
    v5 = 0xFFFFFFFF >> (8 * (4 - v4));
  v26[0] = 0;
  v27[0] = v5;
  v8 = 4LL;
  v27[1] = v5 << 8;
  v27[3] = v5 << 24;
  v27[2] = v5 << 16;
  if ( v4 < 5 )
    v8 = v4;
  KdpQuickMoveMemory(v26, v2, v8);
  v9 = v6 & 3;
  v26[1] = v26[0] << 8;
  v10 = (struct _SINGLE_LIST_ENTRY *)(v6 & 0xFFFFFFFFFFFFFFFCuLL);
  v26[2] = v26[0] << 16;
  v26[3] = v26[0] << 24;
  if ( (unsigned __int64)v10 < v11 )
  {
    while ( (int)MmDbgCopyMemory(v10, (struct _SINGLE_LIST_ENTRY *)((char *)&v19.Next + 4), 4u, 4u, 4u) < 0 )
    {
LABEL_18:
      v10 = (struct _SINGLE_LIST_ENTRY *)((char *)v10 + 4);
      v9 = 0;
      if ( (unsigned __int64)v10 >= v23 )
        goto LABEL_21;
    }
    v12 = v4 - 4;
    v13 = v9;
    v21 = v4 - 4;
    while ( 1 )
    {
      if ( (HIDWORD(v19.Next) & v27[v13]) == v26[v13] )
      {
        if ( 4 - v9 >= v4 )
          goto LABEL_20;
        v14 = v2 - v9;
        v15 = v12 + v9;
        v16 = (_BYTE *)(v14 + 4);
        if ( !(v12 + v9) )
          goto LABEL_20;
        v17 = (char *)v10 + v9 - v22;
        do
        {
          if ( (int)MmDbgCopyMemory((struct _SINGLE_LIST_ENTRY *)&v17[(_QWORD)v16], &v19, 1u, 1u, 4u) < 0 )
            break;
          if ( LOBYTE(v19.Next) != *v16 )
            break;
          ++v16;
          --v15;
        }
        while ( v15 );
        if ( !v15 )
        {
LABEL_20:
          *(_DWORD *)(a1 + 8) = 0;
          *(_QWORD *)(a1 + 16) = (char *)v10 + v9;
          break;
        }
        v4 = v20;
        v12 = v21;
        v2 = v22;
      }
      ++v9;
      ++v13;
      if ( v9 >= 4 )
        goto LABEL_18;
    }
  }
LABEL_21:
  v24 = 3670072;
  v25 = a1;
  return KdSendPacket(2LL, &v24, 0LL, &KdpContext);
}
