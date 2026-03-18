/*
 * XREFs of ?SaveKsrState@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJIPEAEPEAI@Z @ 0x1C0217440
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::SaveKsrState(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  int v9; // r10d
  unsigned int v10; // eax
  unsigned int v11; // edx
  struct _KTHREAD *v12; // r8
  __int64 v13; // r9
  unsigned __int8 *v14; // rdx
  unsigned int i; // r8d
  __int64 v16; // r9
  unsigned __int8 *v17; // r10
  unsigned int v18; // r11d
  __int64 v19; // rcx
  __int64 v20; // rcx
  _BYTE v22[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v22, this + 5);
  v8 = 0;
  *a4 = 0;
  v9 = *((_DWORD *)this + 4);
  if ( v9 )
  {
    v10 = *((_DWORD *)this + 3);
    v11 = 4;
    if ( v10 )
    {
      v12 = this[3];
      v13 = v10;
      do
      {
        if ( *(_QWORD *)v12 )
          v11 += 24 * *(_DWORD *)(*(_QWORD *)v12 + 152LL) + 16;
        v12 = (struct _KTHREAD *)((char *)v12 + 8);
        --v13;
      }
      while ( v13 );
    }
    if ( a3 )
    {
      if ( v11 > a2 )
      {
        v8 = -1073741789;
        goto LABEL_18;
      }
      *(_DWORD *)a3 = v9;
      v14 = a3 + 4;
      for ( i = 0; i < *((_DWORD *)this + 3); ++i )
      {
        v16 = *((_QWORD *)this[3] + i);
        if ( v16 )
        {
          v17 = v14;
          *(_DWORD *)v14 = *(_DWORD *)(v16 + 24);
          v18 = 0;
          *((_DWORD *)v14 + 2) = *(_DWORD *)(v16 + 152);
          v14 += 16;
          if ( *(_DWORD *)(v16 + 152) )
          {
            do
            {
              v19 = v18++;
              v20 = *(_QWORD *)(v16 + 168) + 32 * v19;
              *((_QWORD *)v14 + 1) = *(_QWORD *)(v20 + 8);
              *(_DWORD *)v14 = *(_DWORD *)(v20 + 28);
              *((_DWORD *)v14 + 1) = *(_DWORD *)(v20 + 24);
              *((_QWORD *)v14 + 2) = *(_QWORD *)(v20 + 16);
              v14 += 24;
            }
            while ( v18 < *(_DWORD *)(v16 + 152) );
          }
          *((_DWORD *)v17 + 3) = (_DWORD)v14 - (_DWORD)v17;
        }
      }
      v11 = (_DWORD)v14 - (_DWORD)a3;
    }
    *a4 = v11;
  }
LABEL_18:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return v8;
}
