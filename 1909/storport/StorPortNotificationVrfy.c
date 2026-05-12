/*
 * XREFs of StorPortNotificationVrfy @ 0x1C0078440
 * Callers:
 *     <none>
 * Callees:
 *     StorPortNotification @ 0x1C00052A0 (StorPortNotification.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

void StorPortNotificationVrfy(int a1, _QWORD **a2, ...)
{
  va_list v3; // r8
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // r9
  va_list v7; // r8
  int v8; // ecx
  va_list v9; // rbx
  void *v10; // rcx
  _QWORD **v11; // [rsp+58h] [rbp+10h]
  va_list v12; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h]
  __int64 v14; // [rsp+68h] [rbp+20h]
  __int64 v15; // [rsp+70h] [rbp+28h]
  __int64 v16; // [rsp+78h] [rbp+30h]
  __int64 v17; // [rsp+80h] [rbp+38h]
  __int64 v18; // [rsp+88h] [rbp+40h]
  va_list va1; // [rsp+90h] [rbp+48h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v12 = va_arg(va1, va_list);
  v14 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v11 = a2;
  va_copy(v3, va);
  v4 = 4096;
  if ( a1 > 4096 )
  {
    switch ( a1 )
    {
      case 4097:
        v4 = 4097;
        break;
      case 4098:
        StorPortNotification(4098, a2, v12, v14, v15, v16);
        return;
      case 4099:
        StorPortNotification(4099, a2, (unsigned int)v12, v14, v15);
        return;
      case 4100:
        v3 = v12;
        v5 = 4100;
        goto LABEL_34;
      case 4101:
        StorPortNotification(4101, a2, (unsigned int)v12, v14, v15, v16, v17, v18);
        return;
      case 4102:
        v4 = 4102;
        break;
      case 4103:
        StorPortNotification(4103, a2, v12, v14, v15);
        return;
      default:
        goto LABEL_33;
    }
LABEL_42:
    StorPortNotification(v4, a2, v12, v14);
    return;
  }
  if ( a1 == 4096 )
    goto LABEL_42;
  if ( !a1 )
  {
    v9 = v12;
    if ( v12[2] == 40 )
      v10 = (void *)*((_QWORD *)v12 + 13);
    else
      v10 = (void *)*((_QWORD *)v12 + 7);
    memset(v10, 254, (*(_DWORD *)(**(a2 - 2) + 444LL) + 7) & 0xFFFFFFF8);
    a2 = v11;
    v3 = v9;
    v5 = 0;
    goto LABEL_34;
  }
  v5 = 3;
  switch ( a1 )
  {
    case 3:
LABEL_34:
      StorPortNotification(v5, a2, v3);
      return;
    case 6:
      v6 = (unsigned int)v14;
      v8 = 6;
      v7 = v12;
LABEL_21:
      StorPortNotification(v8, a2, v7, v6);
      return;
    case 8:
      v6 = (unsigned __int8)v14;
      if ( (_BYTE)v14 != 0xFF )
      {
        StorPortNotification(8, a2, v12, (unsigned __int8)v14, (unsigned __int8)v15, (unsigned __int8)v16);
        return;
      }
      v7 = v12;
      v8 = 8;
      goto LABEL_21;
  }
  if ( a1 != 9 )
  {
    switch ( a1 )
    {
      case 12:
        v3 = v12;
        v5 = 12;
        goto LABEL_34;
      case 14:
        StorPortNotification(14, a2, (unsigned int)v12, v14);
        return;
      case 15:
        v3 = v12;
        v5 = 15;
        goto LABEL_34;
    }
LABEL_33:
    v5 = a1;
    goto LABEL_34;
  }
  if ( (_BYTE)v12 == 0xFF )
    StorPortNotification(9, a2, (unsigned __int8)v12);
  else
    StorPortNotification(9, a2, (unsigned __int8)v12, (unsigned __int8)v14, (unsigned __int8)v15);
}
