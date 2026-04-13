/*
 * XREFs of ??1exception@@UEAA@XZ_0 @ 0x1800C6EBC
 * Callers:
 *     ??1bad_alloc@std@@UEAA@XZ @ 0x1800A9F18 (--1bad_alloc@std@@UEAA@XZ.c)
 *     ??1bad_function_call@std@@UEAA@XZ @ 0x1800A9F30 (--1bad_function_call@std@@UEAA@XZ.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x1800A9F40 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??_Glength_error@std@@UEAAPEAXI@Z @ 0x1800A9F80 (--_Glength_error@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall exception::~exception(exception *this)
{
  __imp_??1exception@@UEAA@XZ(this);
}
