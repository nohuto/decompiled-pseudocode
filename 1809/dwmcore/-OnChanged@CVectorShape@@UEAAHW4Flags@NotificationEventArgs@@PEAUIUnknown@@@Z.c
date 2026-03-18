/*
 * XREFs of ?OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801B5800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVectorShape::OnChanged(__int64 a1, int a2)
{
  unsigned int v3; // r8d
  int v4; // edx
  int v5; // edx
  int v6; // edx
  bool v7; // zf
  char v8; // cl

  v3 = 1;
  if ( !a2 )
    goto LABEL_7;
  v4 = a2 - 1;
  if ( !v4 )
  {
LABEL_6:
    v3 = 0;
    v7 = *(_BYTE *)(a1 + 80) == 0;
LABEL_8:
    LOBYTE(v3) = v7;
    return v3;
  }
  v5 = v4 - 1;
  if ( !v5 || (v6 = v5 - 2) == 0 )
  {
LABEL_7:
    v8 = *(_BYTE *)(a1 + 80);
    *(_BYTE *)(a1 + 80) = 1;
    v3 = 0;
    v7 = v8 == 0;
    goto LABEL_8;
  }
  if ( v6 == 2 )
    goto LABEL_6;
  return v3;
}
