/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HPD_CURSOR@@PEAUtagHPD_CURSOR@@K_K_N@Z @ 0x1C0155D88
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0154FE8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01541A0 (-Ensure@CIVSerializer@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_HPD_CURSOR **a2,
        struct tagHPD_CURSOR *a3,
        __int64 a4,
        unsigned __int64 a5,
        bool a6)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  unsigned int v10; // r9d
  _QWORD *v11; // r10
  __int64 *v12; // r11
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  char *v15; // rbx
  __int64 v16; // rcx

  v7 = (a5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a6 )
  {
    *((_QWORD *)this + 2) += v7;
    return 0LL;
  }
  v8 = *((_QWORD *)this + 3);
  if ( CIVSerializer::Ensure(this, v7) )
  {
    v13 = v8 + *v9;
    *v12 = v13;
    if ( v10 )
    {
      v14 = (_DWORD *)(v13 + 4);
      v15 = (char *)a3 - v13;
      v16 = v10;
      do
      {
        *(v14 - 1) = *(_DWORD *)((char *)v14 + (_QWORD)v15 - 4);
        *v14 = *(_DWORD *)((char *)v14 + (_QWORD)v15);
        v14[1] = *(_DWORD *)((char *)v14 + (_QWORD)v15 + 4);
        v14 += 3;
        --v16;
      }
      while ( v16 );
      v13 = *v12;
    }
    *v12 = (v13 - *v11) | 1;
    return 0LL;
  }
  return 3221225495LL;
}
