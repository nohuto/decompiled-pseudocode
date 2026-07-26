/*
 * XREFs of ?MoveClientToNextState@@YAXPEAUNET_PACKET_CLIENT@@@Z @ 0x1C0108130
 * Callers:
 *     ?Iterate@@YA_NXZ @ 0x1C0107FF0 (-Iterate@@YA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MoveClientToNextState(struct NET_PACKET_CLIENT *a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  void (__fastcall *v6)(_QWORD); // rax
  void (__fastcall *v7)(_QWORD); // rax
  void (__fastcall *v8)(_QWORD); // rax
  void (__fastcall *v9)(_QWORD); // rax

  v2 = *(_DWORD *)a1 - 1;
  if ( !v2 )
  {
LABEL_8:
    *(_DWORD *)a1 = 2;
    return;
  }
  v3 = v2 - 1;
  if ( v3 )
  {
    v4 = v3 - 2;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        if ( v5 != 2 )
          return;
        v6 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 5);
        *(_DWORD *)a1 = 9;
        if ( v6 )
          v6(*((_QWORD *)a1 + 6));
        goto LABEL_8;
      }
      v7 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 4);
      *(_DWORD *)a1 = 7;
      if ( v7 )
        v7(*((_QWORD *)a1 + 6));
    }
    else
    {
      v8 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 3);
      *(_DWORD *)a1 = 5;
      if ( v8 )
        v8(*((_QWORD *)a1 + 6));
      *(_DWORD *)a1 = 6;
    }
  }
  else
  {
    v9 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 2);
    *(_DWORD *)a1 = 3;
    if ( v9 )
      v9(*((_QWORD *)a1 + 6));
    *(_DWORD *)a1 = 4;
  }
}
