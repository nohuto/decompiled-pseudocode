/*
 * XREFs of MiCheckProtoAccess @ 0x140098B50
 * Callers:
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiCheckVirtualAddress @ 0x140098C30 (MiCheckVirtualAddress.c)
 */

__int64 __fastcall MiCheckProtoAccess(unsigned __int64 a1, int *a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  int v9; // ecx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // [rsp+30h] [rbp+8h] BYREF
  char v14; // [rsp+38h] [rbp+10h] BYREF

  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 8 * ((v4 >> 3) & 0x1FF));
      v12 = v3 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = v3;
      v3 = v12;
      if ( (v11 & 0x42) != 0 )
        v3 = v12 | 0x42;
    }
  }
  v5 = (v3 >> 5) & 0x1F;
  if ( (v3 & 0x400) == 0 )
    goto LABEL_8;
  v6 = v3;
  if ( qword_14043B180 && (v3 & 0x10) == 0 )
    v6 = v3 & ~qword_14043B180;
  if ( HIDWORD(v6) == 0xFFFFFFFF )
  {
    result = MiCheckVirtualAddress((__int64)(v4 << 25) >> 16, &v13, &v14);
    *a2 = v5;
  }
  else
  {
LABEL_8:
    v8 = v3;
    if ( qword_14043B180 && (v3 & 0x10) == 0 )
      v8 = v3 & ~qword_14043B180;
    result = v8 >> 16;
    v9 = 256;
    if ( (v3 & 8) != 0 )
      v9 = 1;
    *a2 = v9;
  }
  return result;
}
